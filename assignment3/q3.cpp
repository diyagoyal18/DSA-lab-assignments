/*
Roll Number: 102215255
Name: Diya Goyal
Description:Implement combination formula n C r using recursion and code it in C/C++/JAVA/Python
language.
Acknowledgement: took help from geeks for geeks;
*/
#include<iostream>
using namespace std;
int combination(int n, int r){
    //base case
    if(n<r){
        return 0;
    }
    if(r==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(r==1){
        return n;
    }
    int ans= combination(n-1,r-1) + combination(n-1, r);
    return ans;
}
int main(){
    int n;
    int r;
    cin>>n>>r;
    cout<<combination(n,r);
    return 0;
}