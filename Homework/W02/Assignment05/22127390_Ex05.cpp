#include "Theater.h"

using namespace std;

int main () {
    int x, y, n, choice = 0;
    long Total = 0;
    Theater A;
    cout << "============ CISTILY's Theater ============" << endl;
    cout << "1. Default price (read from Price.txt file)" << endl;
    cout << "2. Custom price (User input)" << endl;
    cout << "3. Buy one ticket" << endl;
    cout << "4. Buy multiple tickets" << endl;
    cout << "5. Tickets sales" << endl;
    cout << "6. Number of seats have been sold" << endl;
    cout << "7. Number of seats available in each row" << endl;
    cout << "8. Number of available in theater" << endl;
    cout << "0. Terminate the program" << endl;

    do {
        cout << "===========================================" << endl;
        cout << "Your choice: ";
        cin >> choice;
        cout << "===========================================" << endl;
        switch(choice) {
            case 0:
                cout << "Terminating the program" << endl;
                break;
            case 1:
                A.printOutSeat();
                A.printOutPrice();
                break;
            case 2:
                A.printOutSeat();
                break;
            case 3:
                A.printOutSeat();
                cout << "Please input wanted seat: " << endl;
                A.inputSeat(x, y);
                Total = A.orderOneTicket(x-1, y-1);
                cout << "Total price: " << Total << endl;
                A.printOutSeat();
                break;
            case 4:
                A.printOutSeat();
                Total = A.orderMultipleTicket();
                cout << "Total price: " << Total << endl;
                break;
            case 5: 
                A.calculateTicketSale();
                break;
            case 6:
                A.listOfSoldSeats();
                break;
            case 7:
                cout << "Input row to check: ";
                cin >> n;
                A.seatInEachRow(n);
                break;
            case 8:
                A.seatInAuditorium();
                break;
        }
    } while (choice != 0);
    return 0;
}