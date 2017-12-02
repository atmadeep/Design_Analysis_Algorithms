#include <iostream>
#include <random>
const int MAX=10;
using namespace std;
void Quick_sort(int[],int,int);
int Partition(int [],int,int);
void swap(int[], int,int);
void Print_Array();
int array[MAX];
int main(){
    for (int i = 0; i <MAX ; ++i) {
        array[i]=rand()%100;
    }
//printf("1   2   3   4   5   6  7  8\n");
    clock_t clock1,clock2;
    Print_Array();
    clock1=clock();
    Quick_sort(array,0,MAX-1);
    clock2=clock();
    cout<<endl;
    printf("\nsorted\n");
    Print_Array();
    printf("\ntime taken = %f", static_cast<double>(clock2 - clock1)/CLOCKS_PER_SEC);
}
void Quick_sort(int array[],int low,int high){
    int pivot;

    if(low<high){
        pivot=Partition(array,low,high);
        Quick_sort(array,low,pivot-1);
        Quick_sort(array,pivot+1,high);

    }
}
int Partition(int array[],int low,int high){
    int i,j;
    int pivot=array[high];
    i=low-1;
    for ( j = low; j <=high-1 ; ++j) {
        if(array[j]<=pivot)
        { i++;
            swap(array,i,j);
        }
    }
    swap(array,i+1,high);
    Print_Array();
    return i+1;
}
void swap(int array[],int left,int right){
    int temp=array[left];
    array[left]=array[right];
    array[right]=temp;
}
void Print_Array(){
    printf("\n");
    for (int i = 0; i <MAX ; ++i) {
        cout<<array[i]<<" ";
    }
    printf("\n");
}