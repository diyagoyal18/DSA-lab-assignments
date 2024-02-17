/*
Roll Number: 102215255
Name: Diya Goyal
Description:For a given array, write functions to perform the following:
iii. Set operations on array: Union, Intersection
Aknowlwdgement: NA
*/

#include<iostream>
using namespace std;
int* arrayUnion(int arr1[], int size1, int arr2[], int size2, int& unionSize){
    int maxSize= size1+ size2;
    int* unionResult= new int[maxSize];
    int i=0, j=0, k=0;
    while (i<size1 && j<size2)
    {
        if (arr1[i] < arr2[i])
        {
            unionResult[k++]=arr1[i++];
        }
        else if(arr2[j]<arr2[i]){
            unionResult[k++]= arr2[j++];
        }
        else{
            unionResult[k++]= arr1[i++];
            j++;
        }
    }
    while (i<size1) {
        unionResult[k++]= arr1[i++];
    }
    while (j< size2)  {
        unionResult[k++]= arr2[j++];
    }
    unionSize= k;
    return unionResult;
}
int* arrayIntersection(int arr1[], int size1, int arr2[] ,int size2, int& intersectionSize){
    int* intersectionResult = new int[size1<size2 ? size1 : size2];
    int i=0, j=0,k=0;
    while (i<size1 && j<size2)
    {
        if (arr1[i]<arr2[j])
        {
            i++;
        }  else if(arr2[j]<arr1[i]){
            j++;
        } else{
            intersectionResult[k++]= arr1[i++];
            j++;
        }
        intersectionSize= k;
        return intersectionResult; 
    } 
}
int main(){
    int array1[]={1,3,5,7,9};
    int array2[]={2,4,6,8,9,10};
    int size1= sizeof(array1)/ sizeof(array1[0]);
    int size2= sizeof(array2)/ sizeof(array2[0]);
    int unionSize, intersectionSize;
    int* unionResult= arrayUnion(array1, size1,array2,size2,unionSize);
    int* instersectionResult= arrayIntersection(array1,size1, array2, size2, intersectionSize);
    cout<<"Union: ";
    for (int i = 0; i < unionSize; ++i){
        cout<<unionResult[i]<<" ";
    }
    cout<<endl;
    cout<<"Intersection: ";
    for (int i = 0; i < intersectionSize; i++) {
        cout<<instersectionResult[i]<<" ";
    }
    cout<<endl;
    delete[] unionResult;
    delete[] instersectionResult;
    
    return 0;
}