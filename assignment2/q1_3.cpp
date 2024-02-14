/*
Roll Number: 102215255
Name: Diya Goyal
Description: If a one dimensional integer type array with its size and length given, write the code in C++
language to create functions to perform the following operations (Please assume whatever
is necessary to examplify the results) :
iii. Insert(index,x)
*/
#include<iostream>
using namespace std;

void Insert(int arr1[],int size,int index,int element){
	int arr2[size+1];
	for(int i=0;i<size+1;i++){
		arr2[i]=arr1[i];

	}

	for(int j=index;j<size+1;j++){
		arr2[j]=arr1[j-1];
	}
	arr2[index]=element;

	for(int k=0;k<size+1;k++){
		cout<<arr2[k]<<" ";
	}
}
int main(){
	int arr1[]={1,2,3,4,5,6};
	int size=6;
	int index=3;
	int element=9;
	Insert(arr1,size,index,element);
	return 0;
}