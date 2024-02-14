/*
Roll Number: 102215255
Name: Diya Goyal
Description: For a given Linked List (LL), write programs to perform the following functions

i. Display the elements of a LL

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


void print(Node*head){
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
    
    print(head);
    
    cout<<endl;
    
    
    
}