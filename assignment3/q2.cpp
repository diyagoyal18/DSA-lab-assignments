/*
Roll Number: 102215255
Name: Diya Goyal
Description:Write a program for finding the factorial of a number recursively.
Acknowledgement: NA;
*/
#include<iostream>
using namespace std;
int factorial(int n){
    //base case
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n;
     cin>>n;
 cout<<"factorial of "<<n<<" is "<< factorial(n);
    return 0;
}