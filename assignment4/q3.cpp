/*
Roll Number: 102215255
Name: Diya Goyal
Description:Implement linear queue by writing a class and also implement the following fumctions:
●	Insert or enqueue 
●	Remove or dequeue
●	Isfull
●	Isempty
Write main function to exemplify the results. Also write a main function to make the implementation a “Menu-Driven
Acknowledgement: NA
*/
#include<iostream>
using namespace std;
class Queue{
    public:
    int front;
    int rear;
    int size;
    int *arr;
  Queue(int size){
        arr=new int[size];
        front=-1;
        rear=-1;
        
  }
    void insert(int data){
        if(rear==size-1){
            cout<<" QUEUE is full (overflow)!!"<<endl;
        }
        else{ 
        }
        if(rear==-1 && front==-1){
            rear++;
            front++;
            arr[rear]=data;
        }
        else{
            rear++;
            arr[rear]=data;
            
        }
    }
    void dequeue(){
        if(front==-1){
            cout<<"stack is already empty!!(underflow)!!"<<endl;
        }
        else{
            arr[front]=-1;
            front++;
            
        }
    }
    void isFull(){
        if(rear==size-1){
            cout<<"Queue is full!!"<<endl;
        }
		else{
			cout<<"Queue is not full!!"<<endl;
		}
    }
    void isEmpty(){
        if(rear==-1 && front==-1){
            cout<<"Queue is empty!!"<<endl;
        }
		else{
			cout<<"Queue is not empty!!"<<endl;
		}
    }
    void printqueue(){
       for(int i=front;i<rear;i++){
           cout<<arr[i]<<" ";
       }
       cout<<endl;
    }
};
int main(){ 
    Queue q1(7);
    q1.insert(10);
    q1.printqueue();
    q1.insert(20);
    q1.printqueue();
    q1.insert(30);
    q1.printqueue();
    q1.insert(40);
    q1.printqueue();
    q1.dequeue();
    q1.dequeue();
    q1.printqueue();
    q1.isEmpty();
    q1.isFull();
}