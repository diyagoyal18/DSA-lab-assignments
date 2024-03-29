/*
Roll Number: 102215255
Name: Diya Goyal
Description:Given a Linked list, List1 = {A 1 , A 2 , . . . A n–1 ; A n ) with data, write a program to re-order it to {A 1 , A n ,
A 2 , A n–1 …} without using any extra space.
Acknowledgement: took help from code studio;
*/
#include<iostream>
using namespace std;

// struct Node for storing nodes
// of a linked list
struct Node{
    int val;
    Node *next;
    Node(int data){
        this->val = data;
        this->next = nullptr;
    }
};

Node* removeEndingNode(Node* root){
    Node *temp = root;
    while(temp!=nullptr and temp->next!=nullptr and temp->next->next!=nullptr){
        temp = temp->next;
    }
    Node *node = temp->next;
    temp->next=nullptr;
    return node;
}

//function to rearrange the linked List
void rearrangeLL(Node* root){
    //trivial case
    if(root==nullptr or root->next==nullptr) return;    
    Node *curNode = root;   
    Node *endNode;  
    while(curNode->next!=nullptr and curNode!=endNode){
        endNode = removeEndingNode(root);  
        Node *tempNode = curNode->next; 
        curNode->next = endNode ;  
        endNode->next = tempNode  ; 
        curNode = curNode->next->next;  
    }
}

//function to print the linked list
void printLL(Node* root){
    Node* temp = root;
    while(temp){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<'\n';
}

int main() {
int num_Nodes=5;
// creating a linked List consisting of 5 elements
Node *root = new Node(5);           // add Node 5
root->next = new Node(2);           // add Node 2
root->next->next = new Node(1);     // add Node 1
root->next->next->next = new Node(4); // add Node 4
root->next->next->next->next = new Node(3); // add Node 3
cout<<"The linked list before rearranging Linked List: ";
printLL(root);                      //print original list
cout<<"The linked list after rearranging Linked List: ";
rearrangeLL(root);
printLL(root);                     
return 0;
}