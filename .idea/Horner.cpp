//
// Created by atmadeep on 12/11/17.
//
#include <iostream>
using namespace std;
int horner(int poly[],int n,int x){
    int result=poly[0];
    for (int i = 1; i <n ; ++i) {
        result=result*x + poly[i];
    }
    return result;
}
/*todo-me finish all files in DAA lab record*/
int main(){
    int x=2;
    int poly[5] = {8,16,-12,-7,6};
    printf("the polynomial is\n");
    for (int i = 0; i <5 ; ++i) {
        printf("(%dx^%d)",poly[i],5-i-1);
        if(poly[i]>0)
            printf(" + ");
        else    
            printf(" - ");
    }
    printf("\nThe result for x = %d is %d\n",x,horner(poly,5,x));
}
