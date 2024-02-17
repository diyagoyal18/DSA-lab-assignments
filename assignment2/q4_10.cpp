/*
Roll Number: 102215255
Name: Diya Goyal
Description: For a given Linked List (LL), write programs to perform the following functions

x. Create a doubly LL, insert in a doubly LL and reverse a doubly LL.
*/
#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* prev;
	Node* next;
	Node(){
		this->prev=NULL;
		this->next=NULL;
	}
	Node(int data){
		this->data=data;
		this->next=NULL;
		this->prev=NULL;
	}
};
void insert(Node* &head, int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode; 
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}
void print(Node* &head){
    if (head == NULL) {
        cout << "Doubly linked list is empty" << endl;
        return;
    }
    Node* temp = head;
    while(temp!=NULL){
    	cout << temp->data << " <-> ";
        temp = temp->next;
	}
}
void reverse(Node* &head) {
    Node* temp = NULL;
    Node* cur = head;
    while (cur->next != NULL) {
        cur = cur->next;
    }
    head = cur;
    while (cur != NULL) {
        temp = cur->prev;
        cur->prev = cur->next;
        cur->next = temp;
        cur = cur->next;
    }
}
int main() {
     Node* head = NULL;
    insert(head, 3);
    insert(head, 19);
    insert(head, 9);
    insert(head, 12);
    insert(head, 8);
    cout << "Original doubly linked list: ";
    print(head);
    cout<<endl;
    reverse(head);
    cout<<endl;
    cout << "Reversed doubly linked list: ";
    print(head);
    cout<<endl;
    return 0;
}