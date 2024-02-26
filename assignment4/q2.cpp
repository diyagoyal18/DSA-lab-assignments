/*
Roll Number: 102215255
Name: Diya Goyal
Description:Implement the following stack operations using linked List:
●	Push
●	Pop
●	IsFull
●	isEmpty
●	Peek
Create a stack structure and stack class for the above said implementation.
Acknowledgement: NA
*/
#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node *chain;
	Node(int data){
		this->data = data;
		this->chain =NULL;
	}
};

class Stack{
	Node* top;
	public:
	Stack(){
		top=NULL;
		

	}
	void peek(){
		if(top==NULL){
			cout<<"stack is empty!!"<<endl;
		}
		else{
			cout<<top->data<<endl;

		}
		
	}
	void push(int data){
		Node *temp=new Node(data);
		if(!temp){
			cout<<"stack overflow"<<endl;
		}
		else{
			temp->data=data;
			temp->chain=top;
			top=temp;
		}
	}

	void isEmpty(){
		if(top==NULL);
		cout<<"stcak is empty!!"<<endl;

	}
	void pop(){
		Node *temp;
		if(top==NULL){
			cout<<"underflow"<<endl;
		}
		else{
		temp=top;
		top=top->chain;
		free(temp);

		}

	}

	void printstack(){
		Node*temp;
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->chain;
		}
		cout<<endl;
	}

};

int main(){
	Stack s1;
	s1.push(15);
	s1.push(25);
	s1.printstack();
	s1.peek();
}