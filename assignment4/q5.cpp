/*
Roll Number: 102215255
Name: Diya Goyal
Description:	Implement priority queue by writing a class and also implement the following fumctions:
●	Insert or enqueue 
●	Remove or dequeue
●	Isfull
●	Isempty
Write main function to exemplify the results. Also write a main function to make the implementation a “Menu-Driven”. 
Acknowledgement: NA
*/
#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class PriorityQueue {
private:
    int elements[MAX_SIZE];
    int size;
public:
    PriorityQueue() : size(0) {}
    void Enqueue(int value) {
        if (size == MAX_SIZE) {
            cout << "Priority queue overflow! The priority queue is full." << endl;
            return;
        }
        int i = size - 1;
        while (i >= 0 && elements[i] > value) {
            elements[i + 1] = elements[i];
            i--;
        }
        elements[i + 1] = value;
        size++;
    }
    int Dequeue() {
        if (Empty()) {
            cout << "Priority queue underflow! The priority queue is empty." << endl;
            return -1;
        }
        int frontElement = elements[0];
        for (int i = 0; i < size - 1; i++) {
            elements[i] = elements[i + 1];
        }
        size--;
        return frontElement;
    }
    bool Full() {
        return size == MAX_SIZE;
    }
    bool Empty() {
        return size == 0;
    }
};
void Menu() {
    PriorityQueue priorityQueue;
    int choice, value;
    do {
        cout << "Menu:" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Check if Priority Queue is full" << endl;
        cout << "4. Check if Priority Queue is empty" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                priorityQueue.Enqueue(value);
                break;
            case 2:
                cout << "Dequeued: " << priorityQueue.Dequeue() << endl;
                break;
            case 3:
                if (priorityQueue.Full())
                    cout << "Priority Queue is full." << endl;
                else
                    cout << "Priority Queue is not full." << endl;
                break;
            case 4:
                if (priorityQueue.Empty())
                    cout << "Priority Queue is empty." << endl;
                else
                    cout << "Priority Queue is not empty." << endl;
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);
}
int main() {
    Menu();
    return 0;
}