/*
Roll Number: 102215255
Name: Diya Goyal
Description:Write a function to perform following operations on the string:
(Note: You can make single function for all operations/independent function for each
problem)
Checking if a string is palindrome.
Acknowledgement: NA;
*/
#include<iostream>
using namespace std;
bool isPalindrome(string name,int i, int j){
    //base case
    if(i>j){
        return true;
    }
    if(name[i]!=name[j]){
        return false;
    }
    else{

  return  isPalindrome(name,i+1,j-1);
    }
}
int main(){
    string name= "abcds";
   bool check= isPalindrome(name,0,name.length()-1);
    if(check){
        cout<<"the given string is palindrome"<<endl;
    }
    else{
        cout<<"the given string is not a palindrome"<<endl;
    }
    return 0;
}