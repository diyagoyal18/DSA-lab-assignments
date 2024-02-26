/*
Roll Number: 102215255
Name: Diya Goyal
Description: Implement a queue using two stacks only. Name the two as forward and reverse stacks.  The resultant queue (comprised of two stacks) should perform the following functions with minimum time complexity:
i.	Enqueue()
ii.	Dequeue()
iii.	isFull()
iv.	isEmpty()
Also incorporate the code for exception handling.
Acknowledgement: NA
*/
#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class Queue {
private:
    int forward[MAX_SIZE];
    int reverse[MAX_SIZE];
    int forwardTop;
    int reverseTop;
public:
    Queue() : forwardTop(-1), reverseTop(-1) {}
    void Enqueue(int value) {
        if (IsFull()) {
            cout << "Queue overflow! Cannot insert element " << value << endl;
            return;
        }
        forward[++forwardTop] = value;
    }
    int Dequeue() {
        if (IsEmpty()) {
            cout << "Queue underflow! The queue is empty." << endl;
            return -1; 
        }
        if (reverseTop == -1) {
            while (forwardTop > -1) {
                reverse[++reverseTop] = forward[forwardTop--];
            }
        }
        return reverse[reverseTop--];
    }
    bool IsFull() const {
        return forwardTop == MAX_SIZE - 1 && reverseTop == MAX_SIZE - 1;
    }
    bool IsEmpty() const {
        return forwardTop == -1 && reverseTop == -1;
    }
};
int main() {
    Queue queue;
    queue.Enqueue(5);
    queue.Enqueue(10);
    queue.Enqueue(15);

    cout << "Dequeued: " << queue.Dequeue() << endl;
    cout << "Dequeued: " << queue.Dequeue() << endl;
    cout << "Dequeued: " << queue.Dequeue() << endl;
    cout << "Dequeued: " << queue.Dequeue() << endl; 
    return 0;
}