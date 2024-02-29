/*
Roll Number: 102215255
Name: Diya Goyal
Description:Write a function to perform following operations on the string:
(Note: You can make single function for all operations/independent function for each
problem)
i. Finding length of a string
Acknowledgement: NA;
*/

#include<iostream>
using namespace std;
int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i] !='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cin>>name;
    cout<<"my name is "<<name<<endl;

    cout<<"length: "<< getLength(name);

    return 0;
}