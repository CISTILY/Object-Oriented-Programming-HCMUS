#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class Theater {
private:
    char** Seat;
    int* price;
public:
    Theater();                                      // Default Constructor with prices read from "price.txt"
    ~Theater();                                     // Destructor of theater
    void printOutSeat();                            // Print the current state of the theater
    long orderOneTicket(int, int);                  // Perform one ticket order
    long orderMultipleTicket(int n);                // Perform multiple tickets order
    bool isFull();                                  // Check if the theater is full or not
    bool isOccupied(int, int);                      // Check if the seat is occupied or not
    bool validSeat(int, int);                       // Check if the input seat is valid
    int calculateTicketSale(long &);                // Calculate revenue and number of tickets sold
    void listOfSoldSeats();                         // Print out list of seats that have been sold
    int seatInEachRow(int);                         // Print out the remaining seats of input row
    int seatInAuditorium();                         // Calculate the remaining seats of the theater
    void inputSeat(int&, int&);                     // Input a seat
    void verifySeat(int &, int &);                  // Verify a seat
    void inputPrice();                              // Input custom prices for each row  
};