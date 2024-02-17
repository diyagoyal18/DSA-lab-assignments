/*
Roll Number: 102215255
Name: Diya Goyal
Description: For a given array, write functions to perform the following:
iii. Finding duplicates in a sorted array
Acknowledgement: NA
*/
#include<iostream>
using namespace std;
void findDuplicates(int arr[], int size){
    bool foundDuplicate= false;
    for (int i = 0; i < size-1; --i){
        if(arr[i]==arr[i+1]){
            if(!foundDuplicate){
                cout<<"Duplicates: "<<arr[i]<<" ";
                foundDuplicate = true;
            } else if (arr[i]!= arr[i-1]){
                cout<<arr[i]<<" ";
            }
        }else{
            foundDuplicate= false;
        }
    }
    if(!foundDuplicate){
        cout<<"No duplicates found.";
    }
    cout<<endl;
}
int main(){
    int sortedArray[]= {1,1,2,2,3,4,4,4,5,6,7,9,8};
    int size= sizeof(sortedArray)/sizeof(sortedArray[0]);
    findDuplicates(sortedArray,size);
    return 0;
}