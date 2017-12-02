//
// Created by atmadeep on 16/10/17.
//
#include <iostream>
using namespace std;
const int MAX=10;
void Bubble_sort(int[],int);
int main(){
    int array[MAX]={43,56,290,76,89,2,775,21,90,532};
    for (int i = 0; i <MAX ; ++i) {
        cout<<array[i]<<" ";
    }
    printf("\n");
    Bubble_sort(array,MAX);
    for (int i = 0; i <MAX ; ++i) {
        cout<<array[i]<<" ";

       }
    return 0;
}
void Bubble_sort(int array[],int size){
    for (int i = 1;i <size; ++i) {
        for (int j = 0;j <size-1; ++j)
               if(array[i]<array[j]){
                   int temp=array[i];
                   array[i]=array[j];
                   array[j]=temp;
               }
         }
    }

