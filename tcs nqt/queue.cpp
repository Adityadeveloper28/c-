#include <iostream>
using namespace std;

#define SIZE 100 // Define the maximum size of the queue as 100 why? to limit the size of the queue to 100 elements
//need 100 ? to limit the size of the queue to 100 elements 
//why 100 elements? to avoid memory overflow and manage the queue size

class Queue {
private:
    int items[SIZE], front, rear; // Define an array to store queue elements and front, rear indices
    //what is front and rear? front and rear are indices to keep track of the first and last elements of the queue
    //what is items[]? items[] is an array to store the elements of the queue


public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return (rear == SIZE - 1);
    }

    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    void enqueue(int element) {
        if (isFull()) {
            cout << "Queue is full" << endl;
        } else {
            if (front == -1) front = 0;
            items[++rear] = element;
            cout << "Inserted " << element << endl;
        }
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        } else {
            int element = items[front++];  //front++ means increment front by 1 after assigning the value to element 
             // Remove the front element from the queue
            if (front > rear) { // Reset front and rear indices when the queue becomes empty
                front = rear = -1;  //why front=rear=-1? to reset the queue indices when the queue becomes empty
            }
            return element;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Queue elements are: ";
            for (int i = front; i <= rear; i++) {
                cout << items[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    q.display();

    cout << "Dequeued: " << q.dequeue() << endl;

    q.display();

    return 0;
}
//daigram of queue 
//front=0 rear=0
//front=0 rear=1
//front=0 rear=2
//Queue elements are: 1 2 3
//Dequeued: 1
//Queue elements are: 2 3
//front=1 rear=2 ? front=1 rear=2 why front=1 rear=2? to keep track of the first and last elements of the queue after dequeue operation