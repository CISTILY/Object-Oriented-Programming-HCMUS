#include "Function.h"

using namespace std;

int main () {
    LinkedListQueue a;
    initLinkedList(0, a);
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
                clear(a);
                break;
            case 1:
                cout << "--- Initialize Queue ---" << endl;
                cout << "Input size of Queue: ";
                cin >> capacity;
                initLinkedList (capacity, a);
                printQueue(a);
                break;
            case 2:
                cout << "--- Enqueue ---" << endl;
                cout << "Input a value: ";
                cin >> value;
                enqueue(value, a);
                printQueue(a);
                break;
            case 3:
                cout << "--- Push ---" << endl;
                cout << "Input a value: ";
                cin >> value;
                push(value, a);
                printQueue(a);
                break;
            case 4:
                cout << "--- Dequeue ---" << endl;
                value = dequeue (a);
                cout << "Result: " << value << endl;
                printQueue(a);
                break;
            case 5:
                cout << "--- Peek ---" << endl;
                value = peek(a);
                cout << "Result: " << value << endl;
                printQueue(a);
                break;
            case 6:
                if (isEmpty(a))
                    cout << "Answer: The Queue is emtpy" << endl;
                else
                    cout << "Answer: The Queue is not emtpy" << endl;
                break;
            case 7:
                if (isFull(a))
                    cout << "Answer: The Queue is full" << endl;
                else
                    cout << "Answer: The Queue is not full" << endl;
                break;
            case 8:
                cout << "--- Clear Queue ---" << endl;
                clear(a);
                printQueue(a);
                cout << "Queue cleared" << endl;
                break;
            default:
                cout << "Invalid key" << endl;
                break;
        }
    } while (choice != 0);
    return 0;
}