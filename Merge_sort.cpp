#include <iostream>
#include <omp.h>
const int MAX=10000;
using namespace std;
void Merge(int[],int,int,int);
void Merge_sort(int[],int,int);

int main(){
    clock_t clock1,clock2;
     int array[MAX];
    for (auto &&item : array) {
        item=(int)random()%10000;
    }
    for (auto &&item : array) {
        cout<<item<<" ";
    }
    printf("\n");
clock1=clock();
    Merge_sort(array,0,MAX-1); //call to merge sort.
#pragma omp parallel for
    for (auto &&item : array) {
        cout<<item<<" ";
    }
clock2=clock();
    printf("\nMerge sort done in %f seconds", static_cast<double >(clock2-clock1)/CLOCKS_PER_SEC);
    return 0;
}
//To divide the array into subarrays.
void Merge_sort(int array[],int low,int high) {
    int mid;
    if (low < high) {
        mid = (low + high) / 2;
        Merge_sort(array,low,mid);
        Merge_sort(array,mid+1,high);
        Merge(array,low,mid,high);
    } else return;
}
//to merge back the subarrays.
void Merge(int array[],int low,int mid,int high){
   int l1=low,l2=mid+1,i=low,temp[high];
#pragma omp parallel for
    while(l1<=mid && l2<=high){
        if(array[l1]<=array[l2])
            temp[i++]=array[l1++];
        else
            temp[i++]=array[l2++];
    }
#pragma omp parallel for
            while(l1<=mid){
        temp[i++]=array[l1++];
    }
#pragma omp parallel for
    while(l2<=high){
        temp[i++]=array[l2++];
    }
#pragma omp parallel for
    for (int j = low; j <= high; ++j) {
        array[j]=temp[j];
    }
}
