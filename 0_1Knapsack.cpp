#include <iostream>
using namespace std;
typedef struct{
    int weight;
    int profit;
}item;
int Knapsack(int, item[],int );
int max(int a,int b);
int main(){
    int n_items,capacity;
    printf("enter no of items\n");
   cin>>n_items;
    item array[n_items];
    printf("\tweight \tprofit\n");
    for (int i = 0; i < n_items; ++i) {
        printf("item[%d]->\n",i+1);
        cin>>array[i].weight>>array[i].profit;
    }
    printf("\nKnapsack Capacity = \n");
    cin>>capacity;
    printf("\nTotal profit is %d",Knapsack(capacity,array,n_items));
    return 0;
}
int Knapsack(int capacity,item array[],int n){
    //base case
    if((n==0)||(capacity==0))
        return 0;
   //don't include item whose weight is greater than knapsack capacity
    if(array[n-1].weight > capacity)
        return Knapsack(capacity,array,n-1);
 // return maximum value obtained with weight added or ignored
    return max((array[n-1].profit + Knapsack((capacity-array[n-1].weight),array,n-1)), Knapsack(capacity,array,n-1));
}
int max(int a,int b){
    return (a > b )? a:b;
}