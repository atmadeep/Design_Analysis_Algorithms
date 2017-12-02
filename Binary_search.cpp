//
// Created by atmadeep on 18/9/17.
//
#include <iostream>
using namespace std;
const int MAX=10;
int Binary_search(int[],int, int, int);
void Merge(int[],int,int,int);
void Merge_sort(int[],int,int);
int main(){
int array[MAX]={34,76,54,35,90,89,67,53,15,89},element;
    element=67;
    Merge_sort(array,0,MAX-1);
    cout<<"\nfound at "<<Binary_search(array,0,MAX-1,element)<<endl;

        for (int i : array) {
        cout<< i <<" ";
    }
    return 0;
}
int Binary_search(int array[],int low,int high,int element){
    int mid;

       mid=low + (high-low)/2;

        if(array[mid]==element)
            return mid + 1;

        else
            if (array[mid]<element)
                return Binary_search(array,mid+1,high,element);
            else
                return Binary_search(array,low,mid-1,element);

    return -1;
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
    while(l1<=mid && l2<=high){
        if(array[l1]<=array[l2])
            temp[i++]=array[l1++];
        else
            temp[i++]=array[l2++];
    }
    while(l1<=mid){
        temp[i++]=array[l1++];
    }
    while(l2<=high){
        temp[i++]=array[l2++];
    }
    for (int j = low; j <= high; ++j) {
        array[j]=temp[j];
    }
}