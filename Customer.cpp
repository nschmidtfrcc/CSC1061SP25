#include "Customer.h"
#include <iostream>
#include <string>

///// CONSTRUCTORS /////

Customer::Customer() {
   name = "X";
   email = "X";
   phone = "X";
   VIN = "X";
   isBuyer = false;
   cout << "WARNING: Customer Data is Null" << endl;
}//end Customer default constructor

Customer::Customer(string nn, string ee, string pp, bool isBuyer, string vv){
    name = nn;
    email = ee;
    phone = pp;
    this->isBuyer=isBuyer;
    VIN = vv;
}
///// SETTERS /////

void Customer::setName(string nn) { name = nn; }// end setName

void Customer::setEmail(string ee) { email = ee; }// end setEmail

void Customer::setPhone(string pp) { phone = pp; }// end setPhone

void Customer::setIsBuyer(bool isBuyer){isBuyer= isBuyer;} 

void Customer::purchase(string vv) { VIN = vv; }// end purchase

///// GETTERS /////

void Customer::customerData() const {
   cout << "Name: " << name << endl;
   cout << "Email: " << email << endl;
   cout << "Phone Number: " << phone << endl;
if(isBuyer==true){
        cout << ", he is buyer" << endl;
} else { cout << ", he is not buyer"<<endl;
}// end if-else
cout <<"VIN number: " << VIN << endl;

// not finished, need bought car data, etc.
}// end customerData

string Customer::getName() { return name; }// end getName

string Customer::getEmail() { return email; }// end getEmail

string Customer::getPhone() { return phone; }// end getPhone
bool Customer::getIsBuyer(){ return isBuyer;}