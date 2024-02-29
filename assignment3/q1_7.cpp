/*
Roll Number: 102215255
Name: Diya Goyal
Description:Write a function to perform following operations on the string:
(Note: You can make single function for all operations/independent function for each
problem)
vii. Finding duplicate characters in a string (Note: print the duplicate characters only once,
irrespective of the number of times it occurred)
Acknowledgement: NA;
*/
#include <iostream> 
#include <string.h> 
using namespace std;

int main(){ 
  string str; 
  int count;  
  cout<<"Enter the string : "; 
  getline(cin,str);

  cout<<"Duplicate characters in a given string: "; 

  int l=str.length();
  for(int i = 0; i <l; i++) { 
    count = 1;
    for(int j = i+1; j < l; j++) {
      if(str[i] == str[j] && str[i] != ' ') { 
      count++; 
     str[j] = '0'; 
    } 
  }


  if(count > 1 && str[i] != '0') 
    cout<<str[i]<<" "; 
  }

  return 0; 
 }
