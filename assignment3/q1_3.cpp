/*
Roll Number: 102215255
Name: Diya Goyal
Description:Write a function to perform following operations on the string:
(Note: You can make single function for all operations/independent function for each
problem)
Counting number of words and vowels in a string
Acknowledgement: NA;
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[20];
    cin.getline(s,20);
    int count=0;
    for (int i = 0; s[i]!= '\0'; i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            ++count;
        }
    }
    int words=1;
    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i]==' ' ){
            ++words;
        }
    }
    cout<<"number of vowels in a string are "<<count<<" and number of words are "<<words<<endl;
    
    return 0;
}