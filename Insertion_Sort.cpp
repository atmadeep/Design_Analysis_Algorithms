#include <iostream>
#define MAX 10
using namespace std;
void Insertion_Sort(int [],int);
int main(){
    int array[MAX];
    for (auto &&item : array) {
        cin>>item;
    }
    cout<<endl;
    Insertion_Sort(array,MAX-1);
    for (auto &&item2 : array) {
        cout<<item2<<" ";
    }
}
void Insertion_Sort(int array[],int size) {
    int i;
    int pos;
    for (i = 0; i < size; ++i) {
        pos = i;
        for (int j = i + 1; j < size; ++j) {
            if (array[j] < array[pos])
                pos = j;
        }

        if (pos != i) {
            int temp = array[pos];
            array[pos] = array[i];
            array[i] = temp;
        }
    }

}