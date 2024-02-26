/*
Roll Number: 102215255
Name: Diya Goyal
Description: Implement the following stack operations using arrays:
●	Push
●	Pop
●	IsFull
●	isEmpty
●	Peek
●	stackTop
Create a stack structure and stack class for the above said implementation.
Acknowledgement: NA
*/
#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size= size;
        arr= new int[size];
        top= -1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
         else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    int peak(){
        if(top>=0){
        return arr[top];
        }
        else{
            cout<<"no element present"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isFull(){
        if(top==size-1){
            return true;
        }
        else{
           return false;
        }
    }
};

int main(){
    Stack st(5);
    st.push(23);
    st.push(12);
    st.push(44);
    st.push(1);

    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;
    if(st.isEmpty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is non empty"<<endl;
    }
    if (st.isFull()){
        cout<<"stack is full"<<endl;
    }
    else{
        cout<<"stack is not full"<<endl;
    }
    
    return 0;
}