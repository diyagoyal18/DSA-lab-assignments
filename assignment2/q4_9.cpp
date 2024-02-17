/*
Roll Number: 102215255
Name: Diya Goyal
Description: For a given Linked List (LL), write programs to perform the following functions
ix. Create and Display a circular Ll
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
void insert(Node* &head, int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
        head->next = head; 
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}
void print(Node* &head){
    if (head == NULL) {
        cout << "Circular linked list is empty" << endl;
        return;
    }
    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << " (head)" << endl;
}
int main() {
     Node* head = NULL;
    for (int i = 1; i <= 10; ++i) {
        insert(head, i);
    }
    cout << "Circular linked list: ";
    print(head);
    return 0;
}
