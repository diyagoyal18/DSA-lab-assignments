/*
Roll Number: 102215255
Name: Diya Goyal
Description: For a given Linked List (LL), write programs to perform the following functions
vii. Concatenate 2 LLs
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
void concatenateLL(Node* &head1, Node* &tail1, Node* &head2, Node* &tail2) {
    if (head1 == NULL) {
        head1 = head2;
        tail1 = tail2;
    } else if (head2 != NULL) {
        tail1->next = head2;
        tail1 = tail2;
    }
}
void print(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main() {
    Node* a1 = new Node(10);
    Node* a2 = new Node(20);
    Node* a3 = new Node(30);
    Node* a4 = new Node(40);
    a1->next = a2;
    a2->next = a3;
    a3->next = a4;
    Node* head1 = a1;
    Node* tail1 = a4;
	cout<<"First LL: ";
	print(head1);
	cout<<endl;
    Node* b1 = new Node(50);
    Node* b2 = new Node(60);
    b1->next = b2;
    Node* head2 = b1;
    Node* tail2 = b2;
	cout<<"Second LL: ";
	print(head2);
	cout<<endl;
    concatenateLL(head1, tail1, head2, tail2);
	cout<<"Concatenated LL: ";
    print(head1);
    return 0;
}

