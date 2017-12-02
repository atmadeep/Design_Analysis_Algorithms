#include <iostream>
using namespace std;
struct linked{
    int item;
    linked *ptr;
};
typedef struct linked linked;
void insert(linked **head,int val,int position=0){
    int k=1;
    linked *p,*q,*temp;
    temp=(linked*)malloc(sizeof(linked));
    if(!temp){
        printf("\nmemory error\n");
        return;
    }
    temp->item=val;
    p=*head;
    
}