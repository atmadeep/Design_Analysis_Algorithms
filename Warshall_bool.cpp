#include <iostream>
const int MAX=4;
using namespace std;
int main(){
    bool array[MAX][MAX];
    int i=0,j=0,k=0;
    printf("enter the adjancency matrix");
    for (i = 0; i <MAX ; ++i) {
        for (j = 0; j <MAX ; ++j) {
            cin>> array[i][j];
        }cout<<"\n";
    }

    //updating values according to Warshall's Algorithm.

    i=j=0;
    while(k<MAX){ //outer most loop.
        for ( i = 0; i <MAX; ++i) {
            if(i==k)
                i++;

            for (j = 0; j <MAX ; ++j) {
                if(j==k)
                    j++;
                if(((array[i][k] ) && (array[k][j] ))){
                    array[i][j]= true;
//                    printf("update@ %d %d\n",i,j);
                }
            }
        }
        k++;
    }
    printf("\nthe shortest path matrix is\n");
    for (i = 0; i <MAX ; ++i) {
        for (j = 0; j <MAX ; ++j) {
            cout<<array[i][j];
            cout<<" ";

        }cout<<"\n";
    }
    return 0;
}