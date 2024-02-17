/*
Roll Number: 102215255
Name: Diya Goyal
Description:For a given array, write functions to perform the following:
i. Check if an array is sorted
Acknowledgement: NA
*/
#include<iostream>
using namespace std;
bool isSorted(int arr[], int size){
	for (int i = 0; i < size-1; ++i)
	{
		if (arr[i]>arr[i+1])
		{
			return false;
		}
	}
	return true;
}
int main(){
	int array1[]= {1,3,5,7,9};
	int array2[]={2,12,8,6,10};

	int size1= sizeof(array1)/sizeof(array1[0]);
	int size2= sizeof(array2)/sizeof(array2[0]);
	cout<<"Array 1 is "<<(isSorted(array1,size1)? "sorted ": "not sorted")<<endl;
	cout<<"Array 2 is "<<(isSorted(array2,size2)? "sorted ": "not sorted")<<endl;
	return 0;
}