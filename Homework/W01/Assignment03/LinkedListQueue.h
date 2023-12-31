#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <iostream>
#include <math.h>

using namespace std;

class Node {
    public:
        int key;
        Node* next;
};

class LinkedListQueue {
    private:
        Node* head;
        Node* tail;
        int capacity;
        int num;
    public:
        Node* createNode(int );         // Create a new node with given value
        void initLinkedList(int);       // Initialize LinkedList with given capacity
        void printQueue();              // Print the current queue
        void push (int);                // Push a value into queue
        void enqueue (int);             // Enqueue a value into queue
        int dequeue ();                 // Dequeue a value from queue
        int peek();                     // Get the top value of queue
        bool isEmpty();                 // Check if the queue is empty
        bool isFull();                  // Check if the queue if full
        void clear();                   // Clear the queue
};

#endif //FUNCTION_H_