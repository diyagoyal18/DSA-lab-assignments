/*
Roll Number: 102215255
Name: Diya Goyal
Description:Implement the Fibonacci series using recursion and code it in C/C++/JAVA/Python language.
Acknowledgement: NA;
*/
#include<iostream>
using namespace std;
int fibonacci(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans;
   return ans= fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n;
    cin>>n;
    int i=0;
    while (i<n)
    {
       cout<<fibonacci(i)<<" ";
       i++;
    }
    return 0;
}