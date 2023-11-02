#include "Theater.h"

using namespace std;

int main() {
    int x, y, n, choice = 0, count = 0;
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
        switch (choice) {
        case 0:
            cout << "Terminating the program" << endl;
            break;
        case 1:
            A.printOutSeat();
            break;
        case 2:
            cout << "Please enter price for rows: " << endl;
            A.inputPrice();
            cout << "===========================================" << endl;
            A.printOutSeat();
            break;
        case 3:
            A.printOutSeat();
            cout << "-------------------------------------------" << endl;
            A.verifySeat(x, y);
            Total = 0;
            Total = A.orderOneTicket(x - 1, y - 1);
            cout << "Total price: " << Total << endl;
            cout << "-------------------------------------------" << endl;
            A.printOutSeat();
            break;
        case 4:
            A.printOutSeat();
            cout << "-------------------------------------------" << endl;
            cout << "How many tickets you want to buy: ";
            cin >> n;
            Total = 0;
            Total = A.orderMultipleTicket(n);
            cout << "Total price: " << Total << endl;
            break;
        case 5:
            Total = 0;
            count = A.calculateTicketSale(Total);
            cout << "Number of ticket sales: " << count << endl;
            cout << "Total ticket sales: " << Total << endl;
            break;
        case 6:
            A.listOfSoldSeats();
            break;
        case 7:
            cout << "Input row to check: ";
            cin >> n;
            cout << "Row " << n << " ";
            count = A.seatInEachRow(n);
            cout << endl;
            cout << "There still " << count << " seats in row " << n << endl;
            break;
        case 8:
            count = A.seatInAuditorium();
            cout << "The remaining seats in the Auditorium is: " << count << endl;
            break;
        default:
            cout << "Invalid key" << endl;
            break;
        }
    } while (choice != 0);
    return 0;
}