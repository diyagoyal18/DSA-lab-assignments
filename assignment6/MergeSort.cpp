/*
Roll Number: 102215255
Name: Diya Goyal
Description: Write a program to perform sorting of a given array using the following algorithms:
• Merge Sort
Acknowledgement: NA
*/
#include<iostream>
using namespace std;
void merge(int *arr, int s, int e){
int mid= (e+s)/2;

int len1=mid-s+1;
int len2= e-mid;

int *first= new int[len1];
int *second= new int[len2];

int mainArrayIndex=s;
for (int i = 0; i < len1; i++)
{
    first[i]= arr[mainArrayIndex++];
}
 mainArrayIndex=mid+1;
for (int i = 0; i < len2; i++)
{
    second[i]= arr[mainArrayIndex++];
}


//merge
int index1=0;
int index2=0;
mainArrayIndex=s;
while (index1<len1 && index2<len2)  
{
    if(first[index1]<second[index2]){
        arr[mainArrayIndex++]= first[index1++];
    }
    else{
         arr[mainArrayIndex++]= second[index2++];
       
    }
}
while (index1<len1)
{
   arr[mainArrayIndex++]= first[index1++];

}
while (index2<len2)
{
     arr[mainArrayIndex++]= second[index2++];

}
delete []first;
delete []second;
}
void mergeSort(int *arr, int s, int e){
    if(s>=e)
{
    return;
}
int mid=(e+s)/2;

mergeSort(arr,s,mid);

mergeSort(arr,mid+1,e);

merge(arr,s,e);
}


int main(){
    int arr[5]={1,5,6,3,2};
    int n=5;
    mergeSort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}