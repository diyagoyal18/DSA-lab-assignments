/*
Roll Number: 102215255
Name: Diya Goyal
Description: For a given Linked List (LL), write programs to perform the following functions

iv. Delete an element from a LL

*/
#include<iostream>
using namespace std;

class Node{

	public:
	int data;
	Node* next;

	Node(){
		this->next=NULL;
	}

	Node(int data){
		this->data=data;
		this->next=NULL;
	}

};

int countNodes(Node* &head){
	Node* temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	return count;
}

void deleteNode(Node* &head,Node* &tail,int position){
	

	if( countNodes(head)==1){
		Node* temp1=head;
		head=tail=NULL;
		free(temp1);
		//cout<<"empty node"<<endl;



	}
	else{
		if(position==1){
			Node* temp2=head;
			head=temp2->next;
			free(temp2);
	}
	else if(position==countNodes(head)){
		Node* temp3=tail;
		tail=NULL;
		free(temp3);
}
else{
	int newp=position;
	Node*current=head;
	while(newp==1){
		current=current->next;
		newp--;
	}
	current=NULL;
}
}
}

void print(Node* &head){
    Node*temp=head;
    
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

int main(){
	Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    
    first->next=second;
    second->next=third;
    third->next=fourth;
    
    Node*head=first;
	Node*tail=NULL;

	deleteNode(head,tail,3);
	print(head);

	
}