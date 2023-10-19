#include "LinkedlistQueue.h"

using namespace std;

void LinkedListQueue::initLinkedList(int capacity) {

    this->capacity = capacity;
    this->num = 0;
    this->head = NULL;
    this->tail = NULL;

}

Node* Node::createNode(int x) {

    Node* newNode = new Node;
    newNode->key = x;
    newNode->next = NULL;
    return newNode;

}

void LinkedListQueue::printQueue() {

    cout << "Current Queue: ";
    for (Node* curNode = this->head; curNode != NULL; curNode = curNode->next)
        cout << curNode->key << " -> ";
    cout << endl;

}

void LinkedListQueue::push(int x) {

    if (this->isFull()) {
        cout << "Queue is full !!" << endl;
        return;
    }

    else {
        Node* newNode = createNode(x);

        if (this->head == NULL) {
            this->head = this->tail = newNode;
            this->num++;
            return;
        }

        newNode->next = this->head;
        this->head = newNode;
        this->num++;
    }
}

void LinkedListQueue::enqueue(int x) {

    if (this->isFull()) {
        cout << "Queue is full !!" << endl;
        return;
    }

    else {
        Node* newNode = createNode(x);

        if (this->head == NULL) {
            this->head = this->tail = newNode;
            this->num++;
            return;
        }

        this->tail->next = newNode;
        this->tail = newNode;
        this->num++;
    }
}

int LinkedListQueue::dequeue() {

    if (this->isEmpty()) {
        cout << "The queue is Empty" << endl;
        return -1;
    }

    else {
        Node* temp = this->head;
        int value = this->head->key;
        this->head = this->head->next;
        
        if (this->head == NULL)
            this->tail = NULL;

        delete temp;
        this->num--;
        return value;
    }
}

int LinkedListQueue::peek() {
    if (this->isEmpty())
        return -1;
    return this->head->key;
}

bool LinkedListQueue::isEmpty() {
    if (this->head == NULL)
        return true;
    return false;
}

bool LinkedListQueue::isFull() {
    if (this->num == this->capacity)
        return true;
    return false;
}

void LinkedListQueue::clear() {
    if (this->head == NULL)
        return;

    Node* temp = NULL;
    
    while (this->head != NULL) {

        temp = this->head;
        this->head = this->head->next;
        delete temp;
    
    }
    this->capacity = 0;
    this->num = 0;
}