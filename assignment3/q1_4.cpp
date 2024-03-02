/*
Roll Number: 102215255
Name: Diya Goyal
Description:Write a function to perform following operations on the string:
(Note: You can make single function for all operations/independent function for each
problem)
Validating a string (Note: Valid string does contain only alphabets)
Acknowledgement: took help from friends;
*/

#include<iostream>
using namespace std;

int validstring(char str[]){
	int i=0;
	int flag=-1;
	while(str[i]!='\0'){
		if(int(str[i])>=65 && int(str[i])<=90 || int(str[i])>=97 && int(str[i])<=122){
			flag=0;
		}
		else{
			flag=-1;
			break;
		}
		i++;

	}

	return flag;

}

int main(){
	char str[100]="tanish";
	if(validstring(str)==0){
		cout<<"valid string";
	}
	else{
		cout<<"invalid string"<<endl;
	}
}