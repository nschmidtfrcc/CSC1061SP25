#ifndef customer_h
#define customer_h

#include <string>

using namespace std;

class Customer {
   public:
   ///// CONSTRUCTORS /////
   Customer();
   Customer(string nn, string ee, string pp, bool isBuyer, string vv);
   ///// SETTERS /////
   void setName(string nn);
   void setEmail(string ee);
   void setPhone(string pp);
   void purchase(string vv);
   void setIsBuyer(bool isBuyer);
   ///// GETTERS /////
   void customerData() const;
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