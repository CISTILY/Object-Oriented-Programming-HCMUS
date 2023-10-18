#ifndef FUNCTION_H_
#define FUNCTION_H_

#include <iostream>
#include <math.h>

using namespace std;

struct Node {
    int key;
    Node* next;
};

struct LinkedListQueue {
    Node* head;
    Node* tail;
    int capacity;
    int num;
};


void initLinkedList(int, LinkedListQueue &);    // Initialize LinkedList with given capacity
void printQueue(LinkedListQueue);               // Print the current queue
void push (int, LinkedListQueue &);             // Push a value into queue
void enqueue (int, LinkedListQueue &);          // Enqueue a value into queue
int dequeue (LinkedListQueue &);                // Dequeue a value from queue
int peek(LinkedListQueue);                      // Get the top value of queue
bool isEmpty(LinkedListQueue);                  // Check if the queue is empty
bool isFull(LinkedListQueue);                   // Check if the queue if full
void clear(LinkedListQueue &);                  // Clear the queue

#endif //FUNCTION_H_