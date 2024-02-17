/*
Roll Number: 102215255
Name: Diya Goyal
Description:For a given array, write functions to perform the following:
ii. Merge arrays
Acknowledgement: NA
*/
#include<iostream>
using namespace std;
void mergedArrays(int arr1[],int size1, int arr2[], int size2, int result[]){
    int i=0, j=0, k=0;
    while (i<size1 && j<size2)
    {
        if (arr1[i]<=arr2[j])
        {
        result[k++]=arr1[i++];
        }
        else{
            result[k++]= arr2[j++];
        }    
    }
}
int main(){
    int array1[]= {1,3,5,7,9};
    int array2[]={2,4,6,8,10};
    int size1= sizeof(array1)/sizeof(array1[0]);
    int size2= sizeof(array2)/sizeof(array2[0]);
    int mergedSize= size1 +size2;
    int mergedArray[mergedSize];
    mergedArrays(array1,size1, array2, size2, mergedArray);
    cout<<"Merged Array: ";
    for (int i = 0; i < mergedSize;  ++i) {
        cout<<mergedArray[i]<<" ";
    }
    cout<<endl;
    return 0;
}