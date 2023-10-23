#include <iostream>
#include <vector>

using namespace std;

class Page {
    private:
        string Tittle;
        Product A;
        string Manufacturer;
        string Price;
        string ShopAddress;
        bool Sale;
    public:
        void editPage ();
        void messageWithShop ();
        void addProduct ();
        void printComment ();
        string reportPage ();
};

class Product {
    private:
        string ProductName;
        string Category;
        string Price;
        string color;
        string ProductDetail;
        string ProductDescription;
    public:
        void editDescription ();
        void editDetail ();
        long calculateSalePrice ();
        int calculateStar ();
        long calculateSales ();
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
        void editName ();
        void editBio ();
        void editGGender ();
        void editBirthDay ();
        void editPhoneNumber ();
};

class Cart {
    private:
        int ShopName;
        int Voucher;
        vector<Product> Arr;
        int ShipPrice;
        int Amount;
    public:
        long calculateTotal ();
        void addToCart ();
        void filterbyShopName ();
        long calculateShipPrice ();
        void editCart ();
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
        bool checkVerified (Cart);
        bool checkPickup (Cart);
        bool checkOngiong (Cart);
        bool checkDelivered (Cart);
        bool checkCancel (Cart);
        bool checkReturn (Cart);
        void printOut ();
};