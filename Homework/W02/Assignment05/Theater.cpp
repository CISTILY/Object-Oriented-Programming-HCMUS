#include "Theater.h"

using namespace std;

Theater::Theater() {
    this->Seat = new char* [15];
    for (int i = 0; i < 15; ++i)
        this->Seat[i] = new char [30];
    
    for (int i = 0; i < 15; ++i)
        for (int j = 0; j < 30; ++j)
            this->Seat[i][j] = '*';

    ifstream fIn;
    fIn.open("Price.txt");
    this->price = new int [15];
    for (int i = 0; i < 15; ++i)
        fIn >> this->price[i];
    fIn.close();
}

Theater::~Theater() {
    for (int i = 0; i < 15; ++i)
        delete[] this->Seat[i];
    delete[] this->Seat;
}

void Theater::printOutSeat() {
    cout << setfill(' ') << setw(8);
    for (int i = 1; i <= 30; ++i) {
        if (i < 10)
            cout << i;
        if (i < 20 && i >= 10)
            cout << i-10;
        if (i < 30 && i >= 20)
            cout << i-20;
        if (i == 30)
            cout << i-30;
    }
        
    cout << endl;
    for (int i = 0; i < 15; ++i) {
        cout << "Row " << setfill('0') << setw(2) << i+1 << " ";
        for (int j = 0; j < 30; ++j) {
            cout << this->Seat[i][j];
        }
        cout << endl;
    }    
}

void Theater::printOutPrice() {
    for (int i = 0; i < 15; ++i)
        cout << this->price[i] << " ";
}

bool Theater::isFull () {
    bool k = true;
    for (int i = 0; i < 15; ++i) {
        for (int j = 0; j < 30; ++j) {
            if (this->Seat[i][j] == '*')
                k = false;
        }
    }       
    return k;
}

bool Theater::isOccupied (int x, int y) {
    if (this->Seat[x][y] == '#')
        return true;
    return false;
}

bool Theater::validSeat(int x, int y) {
    if ((x > 0 || x <= 15) && (y > 0 || y <= 30))
        return true;
    return false;
}

long Theater::orderOneTicket(int x, int y) {
    long TotalPrice = 0;
    if (isFull() == true) {
        cout << "Sorry the theater is full!!!" << endl;
        return 0;
    }
    else {
        for (int i = 0; i < 15; ++i) {
            for (int j = 0; j < 30; ++j) {
                if (i == x && j == y)
                    this->Seat[i][j] = '#';
            }
                
            if (x == i) {
                TotalPrice += this->price[i];
                this->revenue += this->price[i];
            }
        }
    }
    return TotalPrice;
}

long Theater::orderMultipleTicket () {
    long Total = 0;
    int n, x, y;
    cout << "How many tickets you want to buy: ";
    cin >> n;


    if (isFull() == true) {
        cout << "Sorry the theater is full!!!" << endl;
        return 0;
    }

    else {
        for (int i = 0; i < n; ++i) {
            cout << "Ticket " << i << ": ";
            this->inputSeat(x, y);
            Total += orderOneTicket(x-1, y-1);
            this->printOutSeat();
        }
    }
    return Total;
}

int Theater::calculateTicketSale() {
    int count = 0;
    for (int i = 0; i < 15; ++i)
        for (int j = 0; j < 30; ++j)
            if (this->Seat[i][j] == '#')
                count++;
    
    cout << "Number of ticket sales: " << count << endl;
    cout << "Total ticket sales: " << this->revenue << endl;
    return count;
}

void Theater::listOfSoldSeats() {
    int count = 0;
    cout << "List of Sold seats" << endl;
    for (int i = 0; i < 15; ++i)
        for (int j = 0; j < 30; ++j)
            if (this->Seat[i][j] == '#') {
                count++;
                cout << count << " " << i << " " << j << endl;
            }
}

int Theater::seatInEachRow(int n) {
    int count = 0;
    cout << "Row " << n << " ";
    for (int i = 0; i < 15; ++i)
        for (int j = 0; j < 30; ++j) {
            if (i == n-1)
                cout << this->Seat[i][j];
            if (this->Seat[i][j] == '#')
                count++;
        }
    cout << endl;
    cout << "Seats available in " << n << " row" << endl;
    return n;
}

int Theater::seatInAuditorium() {
    int count = 0;
    for (int i = 0; i < 15; ++i)
        for (int j = 0; j < 30; ++j)
            if (this->Seat[i][j] != '#')
                count++;
    return count;
}

void Theater::inputSeat(int &x, int &y) {

    do
    {
        cin >> x >> y;
        if (this->validSeat(x, y) == false)
            cout << "Invalid seat" << endl;
        if (this->isOccupied(x-1, y-1) == true)
            cout << "Seat: " << x << " " << y << " is occupied!!!" << endl;

    } while (this->validSeat(x, y) == false || this->isOccupied(x-1, y-1) == true);
}