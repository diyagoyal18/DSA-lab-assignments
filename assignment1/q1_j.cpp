//x.	Copies numbers from two arrays into a third array. The numbers from the second array are placed to the right of the numbers copied from the first array.

#include<iostream>
using namespace std;

int main(){
   int X[]= {1,2,3};
   int Y[]= {4,5,6};
   int m= sizeof(X)/sizeof(X[0]);
   int n= sizeof(Y)/sizeof(Y[0]);
    int arr[m+n];
    for (int i = 0; i < m+n; i++)
    {
        if(i<m){
            arr[i]= X[i];
        }
        else{
            arr[i]=Y[i-m];
        }
    }
    for (int i = 0; i < m+n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}