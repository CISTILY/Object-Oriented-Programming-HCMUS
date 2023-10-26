#include <iostream>
#include <vector>

using namespace std;


class Product {
    private:
        string ProductName;
        string Category;
        string Price;
        string color;
        string ProductDetail;
        string ProductDescription;
    public:
        void editDescription ();                    // Edit product's description
        void editDetail ();                         // Edit Product's information
        long calculateSalePrice ();                 // Calculate sale price
        int calculateStar (Page);                   // Calculate Rating for product
        long calculateSales ();                     // Calculate shop's revenue
};
class Page {                                
    private:
        string Tittle;                      // Tittle of product page
        Product Product;                    // Sell Product
        string ShopName;                    // Name of shop 
        int Rating;                         // Rating of shop 
        string ShopAddress;                 // Address of shop
        bool Sale;                          // Coupon variable
    public:
        void editPage ();                   // Edit information of page
        void messageWithShop ();            // Message with Shop
        void addProduct ();                 // Add a product into page 
        void printComment ();               // Print out comment
        string reportPage ();               // Report this page
};

class Date {
    private:
        int day, month, year;
    public:
        Date (int x, int y, int z) : day(x), month(y), year(z) {}
        void editDate (int x, int y, int z) {
            day = x;
            month = y;
            year = z;
        }
};

class Account {
    private:
        string Name;
        string Bio;
        bool Gender;
        Date BirthDay;
        string PhoneNumber;
    public:
        void editAccount ();                       // Edit Account's information
        void login ();                             // Perform login
        void signin ();                            // Perform singin
        void verifyAccount ();                     // Verify Account's information
        void deleteAccount ();                     // delete Account
};

class Cart {
    private:
        int ShopName;
        int Voucher;
        vector<Product> Arr;
        int ShipPrice;
        int Amount;
    public:
        long calculateTotal ();                 // Calculate Total price of Products   
        void addToCart (Product);               // Add new Product to Cart
        void filterbyShopName ();               // Filter Shop by name
        long calculateShipPrice ();             // Calculate ship price
        void editCart ();                       // Edit cart
};

class PurchaseOrder {
    private:
        bool Verified;
        bool Pickup;
        bool Ongoing;
        bool Delivered;
        bool Cancel;
        bool Return;
    public:
        bool checkVerified (Cart);              // Check if order is verified
        bool checkPickup (Cart);                // Check if order is being pickup
        bool checkOngiong (Cart);               // Check if order is on delivery
        bool checkDelivered (Cart);             // Check if order is deliveried
        bool checkCancel (Cart);                // Check if order is cancel
        bool checkReturn (Cart);                // Check if order is return
        void printOut ();                       // Print out status of order
};