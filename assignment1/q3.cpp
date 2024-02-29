
// Write a program for adding and subtracting Matrices using 2D Arrays.


#include<iostream>
using namespace std;


void subtractingmatrix(){
	int n;
	cout<<"Enter the size of the matrix: ";
	cin>>n;
	int arr1[n][n], arr2[n][n], arr3[n][n];
	cout<<"Enter the elements of the first matrix: ";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr1[i][j];
		}
	}
	cout<<"Enter the elements of the second matrix: ";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr2[i][j];
		}
	}
	cout<<"The subtraction of the two matrices is: ";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr3[i][j] = arr1[i][j] - arr2[i][j];
			cout<<arr3[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	subtractingmatrix();
	return 0;
}