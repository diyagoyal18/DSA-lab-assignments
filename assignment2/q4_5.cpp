/*
Roll Number: 102215255
Name: Diya Goyal
Description: For a given Linked List (LL), write programs to perform the following functions
v. Check if a LL is sorted
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
bool sortedNode(Node* head){
    Node* temp=head;
    
    bool result=true;
    while(temp!=NULL && temp->next!=NULL){
        if(temp->data  >= temp->next->data){
            result=false;
        }
        temp=temp->next;
    }
    return result;
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
    if(sortedNode(head)==true){
        cout<<"LL is sorted!!";
    }
    else{
        cout<<"LL is not sorted!!";
    }
    }
    



