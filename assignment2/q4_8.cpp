/*
Roll Number: 102215255
Name: Diya Goyal
Description: For a given Linked List (LL), write programs to perform the following functions
viii. Reverse the elements of a LL
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
void reverse(Node* &head) {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
void print(Node* &head){
    Node*temp=head;
    
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

int main() {
    Node*  a1= new Node(1);
    Node*  a2 = new Node(2);
    Node*  a3 = new Node(3);
    Node*  a4 = new Node(4);
    Node*  a5 = new Node(5);

    a1->next = a2;
    a2->next = a3;
    a3->next = a4;
    a4->next = a5;

    Node* head = a1;

    cout << "Original linked list: ";
    print(head);
    cout<<endl;

    reverse(head);

    cout << "Reversed linked list: ";
    print(head);

    return 0;
}
