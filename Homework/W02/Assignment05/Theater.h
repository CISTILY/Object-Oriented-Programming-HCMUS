#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class Theater {
    private:
        char** Seat;
        int* price;
        int revenue = 0;
    public:
        Theater ();
        ~Theater ();
        void printOutSeat ();
        void printOutPrice ();
        long orderOneTicket (int, int);
        long orderMultipleTicket ();
        bool isFull();
        bool isOccupied(int, int);
        bool validSeat(int, int);
        int calculateTicketSale ();
        void listOfSoldSeats();
        int seatInEachRow (int);
        int seatInAuditorium();
        void inputSeat(int &, int&);
};