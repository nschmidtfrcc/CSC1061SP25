#ifndef customer_h
#define customer_h

#include <string>

using namespace std;

class Customer {
   public:
   ///// CONSTRUCTORS /////
   Customer();
   Customer(string nn, string ee, string pp, string vv, bool bb);
   ///// SETTERS /////
   void setName(string nn);
   void setEmail(string ee);
   void setPhone(string pp);
   void purchase(string vv);
   void setIsBuyer(bool bb);
   bool checkIfBuyer();
   ///// GETTERS /////  
   void customerData();
   string getName();
   string getEmail();
   string getPhone();
   bool getIsBuyer();
   
   private:
   string name;
   string email;
   string phone;
   string VIN;
   bool isBuyer;
   
   
};

#endif