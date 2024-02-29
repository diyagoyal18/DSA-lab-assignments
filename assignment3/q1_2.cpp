
/*
Roll Number: 102215255
Name: Diya Goyal
Description:Write a function to perform following operations on the string:
(Note: You can make single function for all operations/independent function for each
problem)
Converting a string in lowercase
Acknowledgement: NA;
*/
#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
    char s[20];
    cin>>s;
    for (int i = 0; i <= strlen(s); i++)
    {
        if(s[i]>=65 && s[i]<=92){
            s[i]= s[i]+32;
        }
    }
    cout<<"string in lowercase is "<<s<<endl;
    return 0;
}