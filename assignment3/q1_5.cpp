/*
Roll Number: 102215255
Name: Diya Goyal
Description:Write a function to perform following operations on the string:
(Note: You can make single function for all operations/independent function for each
problem)
v. Reversing a string (Eg. Code  edoC)
Acknowledgement: NA;
*/

#include<iostream>
using namespace std;
void reverse(string& str, int i, int j){
    //base case
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;

    reverse(str,i,j);
}
int main(){
    string name= "diya";
    reverse(name, 0, name.length()-1);
    cout<<name<<endl;
    return 0;
}