//Write a program to find sum of all elements of an array; write a program to find maximum of elements of an array; write a program for linear search of an array.

#include<iostream>
using namespace std;

int largestnumberindex(int arr[], int size){
	int max=arr[0];
	int k=0;
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
			k=i;
		}
		
	}
	return max;
}


int main(){
	int arr[]={1,2,3,4,5,6};
	int size=6;
	int result=largestnumberindex(arr,size);;
	cout<<" index of largest number="<<result<<endl;
	return 0;
}