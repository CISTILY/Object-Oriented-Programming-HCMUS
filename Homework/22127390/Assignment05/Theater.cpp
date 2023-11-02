#include "Theater.h"

using namespace std;

Theater::Theater() {
    this->Seat = new char* [15];
    for (int i = 0; i < 15; ++i)
        this->Seat[i] = new char[30];

    for (int i = 0; i < 15; ++i)
        for (int j = 0; j < 30; ++j)
            this->Seat[i][j] = '*';

    ifstream fIn;
    fIn.open("Price.txt");
    this->price = new int[15];
    for (int i = 0; i < 15; ++i)
        fIn >> this->price[i];
    fIn.close();
}

Theater::~Theater() {
    for (int i = 0; i < 15; ++i)
        delete[] this->Seat[i];
    delete[] this->Seat;
}

void Theater::inputPrice() {
    
    for (int i = 0; i < 15; ++i) {
        cout << "Row " << i + 1 << ": ";
        cin >> this->price[i];
    }
}

bool Theater::isFull() {
    bool k = true;
    for (int i = 0; i < 15; ++i) {
        for (int j = 0; j < 30; ++j) {
            if (this->Seat[i][j] == '*')
                k = false;
        }
    }
    return k;
}

bool Theater::isOccupied(int x, int y) {
    if (this->Seat[x][y] == '#')
        return true;
    return false;
}

bool Theater::validSeat(int x, int y) {
    if ((x > 0 && x <= 15) && (y > 0 && y <= 30))
        return true;
    return false;
}

void Theater::printOutSeat() {
    cout << setfill(' ') << setw(8);
    for (int i = 1; i <= 30; ++i) {
        if (i < 10)
            cout << i;
        if (i < 20 && i >= 10)
            cout << i - 10;
        if (i < 30 && i >= 20)
            cout << i - 20;
        if (i == 30)
            cout << i - 30;
    }
    cout << setw(13) << "PRICES";
    cout << endl;
    for (int i = 0; i < 15; ++i) {
        cout << "Row " << setfill('0') << setw(2) << i + 1 << " ";
        for (int j = 0; j < 30; ++j) {
            cout << this->Seat[i][j];
        }
        cout << setfill(' ') << setw(13) << this->price[i];
        cout << endl;
    }
}

long Theater::orderOneTicket(int x, int y) {
    long TotalPrice = 0;

    for (int i = 0; i < 15; ++i) {
        for (int j = 0; j < 30; ++j) {
            if (i == x && j == y)
                this->Seat[i][j] = '#';
        }

        if (x == i) {
            TotalPrice += this->price[i];
        }
    }
    return TotalPrice;
}

long Theater::orderMultipleTicket(int n) {
    long Total = 0;
    int x, y;

    for (int i = 0; i < n; ++i) {
        cout << "-------------------------------------------" << endl;
        cout << "* Ticket " << i + 1 << endl;
        this->verifySeat(x, y);
        Total += orderOneTicket(x - 1, y - 1);
        cout << "-------------------------------------------" << endl;
        this->printOutSeat();
    }
    return Total;
}

int Theater::calculateTicketSale(long &Total) {
    int count = 0;
    for (int i = 0; i < 15; ++i)
        for (int j = 0; j < 30; ++j)
            if (this->Seat[i][j] == '#') {
                Total += this->price[i];
                count++;
            }

    return count;
}

void Theater::listOfSoldSeats() {

    int count = 0;

    cout << "List of Sold seats" << endl;
    for (int i = 0; i < 15; ++i)
        for (int j = 0; j < 30; ++j)
            if (this->Seat[i][j] == '#') {
                count++;
                cout << "No." << count << ": " << i + 1 << " " << j + 1 << endl;
            }
}

int Theater::seatInEachRow(int n) {

    int count = 0;

    for (int i = 0; i < 15; ++i)
        for (int j = 0; j < 30; ++j) {
            if (i == n - 1) {
                cout << this->Seat[i][j];
                if (this->Seat[i][j] == '#')
                    count++;
            }
        }

    return 30 - count;
}

int Theater::seatInAuditorium() {

    int count = 0;

    for (int i = 0; i < 15; ++i)
        for (int j = 0; j < 30; ++j)
            if (this->Seat[i][j] != '#')
                count++;

    return count;
}

void Theater::inputSeat(int& x, int& y) {

    do
    {   
        cout << "Please choose your wanted seat: ";
        cin >> x >> y;
        if (this->validSeat(x, y) == false)
            cout << "Invalid seat" << endl;

    } while (this->validSeat(x, y) == false);
}

void Theater::verifySeat(int &x, int &y) {

    do {
        if (this->isFull() == true) {
            cout << "The theater is full, please come back later" << endl;
            return;
        }

        this->inputSeat(x, y);
        
        if (this->isOccupied(x - 1, y - 1) == true) {
            cout << "Seat: " << x << " " << y << " is occupied!!!" << endl;
        }

    } while (this->isOccupied(x - 1, y - 1) == true);
}