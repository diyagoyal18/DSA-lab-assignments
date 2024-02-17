/*
Roll Number: 102215255
Name: Diya Goyal
Description: For a given Linked List (LL), write programs to perform the following functions
iii. Search for a key element in a LL
Acknowledgement:NA
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
bool searchforelement(Node*head,int element){
	Node*temp=head;
	bool found=false;
	while(temp!=NULL){
		if(temp->data==element){
			found=true;
	}
	temp=temp->next;
	}
	return found;
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
	int element;
	cout<<"enter the element: ";
	cin>>element;
     if(searchforelement(head,element)){
		cout<<"element exists in LL";
	 }
	 else{
		cout<<"element does not exists in LL";
	 }
	 return 0; 
}