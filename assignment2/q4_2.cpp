/*
Roll Number: 102215255
Name: Diya Goyal
Description: For a given Linked List (LL), write programs to perform the following functions
ii. Count and sum the nodes of a LL
Acknowledgement: NA
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
void TotalNodes(Node*head){
	Node*temp1=head;
	int count=0;
	while(temp1!=NULL){
		count++;
		temp1=temp1->next;
	}
	cout<<"Total no. of nodes:"<<count<<endl;
}
void sumofnodes(Node*head){
	int sum=0;
	Node*temp2=head;
	while(temp2!=NULL){
		sum=sum+temp2->data;
        temp2=temp2->next;
	}
	cout<<"Sum of nodes:"<<sum<<endl;
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
    TotalNodes(head);
	sumofnodes(head);
    cout<<endl;  
}