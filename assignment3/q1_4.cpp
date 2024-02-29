/*
Roll Number: 102215255
Name: Diya Goyal
Description:Write a function to perform following operations on the string:
(Note: You can make single function for all operations/independent function for each
problem)
Validating a string (Note: Valid string does contain only alphabets)
Acknowledgement: NA;
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool valid(char *s){
    for (int i = 0; s[i]!='\0'; i++)
    {
        if(s[i]>=65 && s[i]<=91 || s[i]>=97 && s[i]<=123 ){
            return true;
        }
        else{
            return false;
        }
    }
}
int main(){
    char s[20];
    cin>>s;
    
    if(valid){
        cout<<"its a valid string"<<endl;
    }
    else{
        cout<<"its not a valid string"<<endl;
    }
    
    
    return 0;
}