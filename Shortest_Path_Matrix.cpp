#include <iostream>
const int MAX=4;
using namespace std;
int main(){
    int array[MAX][MAX]={{32767,2,3,8},{1,32767,9,10},{32767,7,6,4},{2,3,32767,7}};
int i=0,j=0,k=0;
    for (i = 0; i <MAX ; ++i) {
        for (j = 0; j <MAX ; ++j) {
            if(array[i][j]==32767)
                cout<<"$ ";
            else
                cout<<array[i][j]<<" ";

        }cout<<"\n";
    }
//updating values according to Floyd's Algorithm.

    i=j=0;
    while(k<MAX){ //outer most loop.
        for ( i = 0; i <MAX; ++i) {
            if(i==k)
                i++;

            for (j = 0; j <MAX ; ++j) {
                if(j==k)
                    j++;
                if((array[i][k] + array[k][j] <= array[i][j])){
                    array[i][j]=array[i][k] + array[k][j];
                    printf("update@ %d %d\n",i,j);
                }
            }
        }
        k++;
    }
    for (i = 0; i <MAX ; ++i) {
        for (j = 0; j <MAX ; ++j) {
            cout<<array[i][j];
            cout<<" ";

        }cout<<"\n";
    }
        return 0;
}