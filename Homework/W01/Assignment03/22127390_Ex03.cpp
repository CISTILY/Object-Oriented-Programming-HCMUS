#include "Function.h"

using namespace std;

int main () {
    LinkedListQueue a;
    a.initLinkedList(0);
    int choice, capacity, value;
    cout << "==== Queue / LinkedList operation ====" << endl;
    cout << "1. Init Queue" << endl;
    cout << "2. Enqueue" << endl;
    cout << "3. Push" << endl;
    cout << "4. Dequeue" << endl;
    cout << "5. Peek" << endl;
    cout << "6. Check if Queue is Empty" << endl;
    cout << "7. Check if Queue is Full" << endl;
    cout << "8. Clear the Queue" << endl;
    cout << "0. To terminate the program" << endl;
    do {
        cout << "==========================" << endl;
        cout << "Your choice: ";
        cin >> choice;
        cout << "==========================" << endl;
        switch (choice) {
            case 0:
                cout << "Terminating the program" << endl;
                a.clear();
                break;
            case 1:
                cout << "--- Initialize Queue ---" << endl;
                cout << "Input size of Queue: ";
                cin >> capacity;
                a.initLinkedList (capacity);
                a.printQueue();
                break;
            case 2:
                cout << "--- Enqueue ---" << endl;
                cout << "Input a value: ";
                cin >> value;
                a.enqueue(value);
                a.printQueue();
                break;
            case 3:
                cout << "--- Push ---" << endl;
                cout << "Input a value: ";
                cin >> value;
                a.push(value);
                a.printQueue();
                break;
            case 4:
                cout << "--- Dequeue ---" << endl;
                value = a.dequeue();
                cout << "Result: " << value << endl;
                a.printQueue();
                break;
            case 5:
                cout << "--- Peek ---" << endl;
                value = a.peek();
                cout << "Result: " << value << endl;
                a.printQueue();
                break;
            case 6:
                if (a.isEmpty())
                    cout << "Answer: The Queue is emtpy" << endl;
                else
                    cout << "Answer: The Queue is not emtpy" << endl;
                break;
            case 7:
                if (a.isFull())
                    cout << "Answer: The Queue is full" << endl;
                else
                    cout << "Answer: The Queue is not full" << endl;
                break;
            case 8:
                cout << "--- Clear Queue ---" << endl;
                a.clear();
                a.printQueue();
                cout << "Queue cleared" << endl;
                break;
            default:
                cout << "Invalid key" << endl;
                break;
        }
    } while (choice != 0);
    return 0;
}