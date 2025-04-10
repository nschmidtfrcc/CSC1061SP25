#ifndef customer_h
#define customer_h

#include <string>

using namespace std;

class Customer {
   public:
   ///// CONSTRUCTORS /////
   Customer();
   ///// SETTERS /////
   void setName(string nn);
   void setEmail(string ee);
   void setPhone(string pp);
   void purchase(string vv);
   ///// GETTERS /////
   void customerData();
   string getName();
   string getEmail();
   string getPhone();
   
   private:
   string name;
   string email;
   string phone;
   string VIN;
   bool isBuyer;
   
   
};

#endif