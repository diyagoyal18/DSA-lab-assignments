/*
Roll Number: 102215255
Name: Diya Goyal
Description: If a one dimensional integer type array with its size and length given, write the code in C++
language to create functions to perform the following operations (Please assume whatever
is necessary to examplify the results) :
iv. Delete(x)
*/
#include<iostream>
using namespace std;

void deleteelement(int arr[],int size, int index){

for(int i=0;i<size;i++){
	if(index==i){
		arr[i]=0;
	}
}
for(int i=index;i<size;i++){
	swap(arr[i],arr[i+1]);
}

for(int k=0;k<size-1;k++){
	cout<<arr[k]<<" ";
}
}

int main(){
int arr[]={1,2,3,4,5,6};
int size=6;
int index=4;
deleteelement(arr,size,index);
return 0;
}