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


void initLinkedList(int, LinkedListQueue &);
void printQueue(LinkedListQueue);
void push (int, LinkedListQueue &);
void enqueue (int, LinkedListQueue &);
int dequeue (LinkedListQueue &);
int peek(LinkedListQueue);
bool isEmpty(LinkedListQueue);
bool isFull(LinkedListQueue);
void clear(LinkedListQueue &);