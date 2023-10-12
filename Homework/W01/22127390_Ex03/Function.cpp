#include "Function.h"

using namespace std;

void initLinkedList(int capacity, LinkedListQueue &a) {
    a.capacity = capacity;
    a.num = 0;
    a.head = NULL;
    a.tail = NULL;
}

Node* createNode (int x) {
    Node* newNode = new Node;
    newNode->key = x;
    newNode->next = NULL;
    return newNode;
}

void printQueue (LinkedListQueue a) {
    cout << "Current Queue: ";
    for (Node* curNode = a.head; curNode != NULL; curNode = curNode->next)
        cout << curNode->key << " -> ";
    cout << endl;
}

void push (int x, LinkedListQueue &a) {

    if (isFull(a)) {
        cout << "Queue is full !!" << endl;
        return;
    }

    else {
        Node* newNode = createNode (x);
        if (a.head == NULL) {
            a.head = a.tail = newNode;
            a.num++;
            return;
        }

        newNode->next = a.head;
        a.head = newNode;
        a.num++;
    }
}

void enqueue (int x, LinkedListQueue &a) {

    if (isFull(a)) {
        cout << "Queue is full !!" << endl;
        return;
    }
    
    else {
        Node* newNode = createNode (x);
        if (a.head == NULL) {
            a.head = a.tail = newNode;
            a.num++;
            return;
        }
            
        a.tail->next = newNode;
        a.tail = newNode;
        a.num++;
    }
    
}

int dequeue (LinkedListQueue &a) {
    if (isEmpty(a)) {
        cout << "The queue is Empty" << endl;
        return -1;
    }
    else {
        Node* temp = a.head;
        int value = a.head->key;
        a.head = a.head->next;
        if (a.head == NULL)
            a.tail = NULL;
        
        delete temp;
        a.num--;
        return value;
    }
}

int peek (LinkedListQueue a) {
    if (isEmpty(a))
        return -1;
    return a.head->key;
} 

bool isEmpty (LinkedListQueue a) {
    if (a.head == NULL)
        return true;
    return false;
}

bool isFull (LinkedListQueue a) {
    if (a.num == a.capacity)
        return true;
    return false;
}

void clear (LinkedListQueue &a) {
    if (a.head == NULL)
        return;

    Node* temp = NULL;
    while (a.head != NULL) {
        temp = a.head;
        delete temp;
        a.head = a.head->next;
    }
}