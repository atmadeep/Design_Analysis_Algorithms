#include <iostream>
using namespace std;
void Hanoi(int , int,int, int);
int main(){
    int n_disk;
    printf("enter no. of disks");
    cin>>n_disk;
    Hanoi(n_disk,0,1,2);
    return 0;
}
void Hanoi(int disks,int source,int destination,int auxillary){
    if(disks > 0)
    {
        Hanoi(disks-1,source,auxillary,destination);
        //Move function
        printf("moved disk %d from pillar-%d to pillar-%d\n",disks,source,destination);
        Hanoi(disks-1,auxillary,destination,source);
    }
}