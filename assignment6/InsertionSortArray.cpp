
/*
Roll Number: 102215255
Name: Diya Goyal
Description: Write a program to perform sorting of a given array using the following algorithms:
• Insertion sort using Array
Acknowledgement: NA
*/
#include<iostream>
using namespace std;

      void printArray(int arr[],int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }

    void InsertionSort(int arr[], int n){
        for(int i=1;i<n;i++){
            int temp = arr[i];
            int j = i-1;
            for (int j=n; j>=0; j--)
             {
                if(arr[j]>temp){
                    arr[j+1]=arr[j];
                }
                else{
                    break;
                }
            }
            arr[j+1]= temp;
            
        }
    }
int main(){
     int arr[5]={5,4,3,2,1};

    InsertionSort(arr,5);
    printArray(arr,5);
    return 0;
}