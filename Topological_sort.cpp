//
// Created by atmadeep on 12/11/17.
//
#include <iostream>
using namespace std;
void findindegree(int [10][10],int [10],int);
void Topological(int,int[10][10]);

int main(){
   int a[10][10],i,j,n;
    printf("\nenter no. of nodes\n");
    cin>>n;
    printf("\nEnter adjacency matrix\n");
    for ( i = 0; i < n; ++i)
        for ( j = 0; j <n ; ++j)
            cin>>a[i][j];

    printf("\nThe adjancency matrix is\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <n ; ++j) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    Topological(n,a);
}
void findindegree(int a[10][10],int indegree[10],int n){
    int i,j,sum;
    for (j = 0; j < n; ++j) {
        sum=0;
        for (i = 0; i < n; ++i) {
            sum+=a[i][j];
        }
        indegree[j]=sum;
    }
}

void Topological(int n,int a[10][10]){
    int k,top,t[100],i,stack[20],u,v;
    int indegree[20];
    k=1;
    top=-1;
    findindegree(a,indegree,n);
    for (i = 0; i <n ; ++i) {
        if(indegree[i]==0)
            stack[++top]=i;
    }
    while(top!=(-1)){
        u=stack[top--];
        t[k++]=u;
        for ( v = 0; v < n; ++v) {
            if(a[u][v]==1){
                indegree[v]--;
                if(indegree[v]==0)
                    stack[++top]=v;
            }
        }
    }
    printf("\ntopological sequence is\n");
    for ( i = 0; i <n ; ++i) {
        printf("%d\t",t[i]);
    }
}