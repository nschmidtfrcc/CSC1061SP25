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

///// SETTERS /////

void Customer::setName(string nn) { name = nn; }// end setName

void Customer::setEmail(string ee) { email = ee; }// end setEmail

void Customer::setPhone(string pp) { phone = pp; }// end setPhone

void Customer::purchase(string vv) { VIN = vv; }// end purchase

///// GETTERS /////

void Customer::customerData() {
   cout << "Name: " << name << endl;
   cout << "Email: " << email << endl;
   cout << "Phone Number: " << phone << endl;
// not finished, need bought car data, etc.
}// end customerData

string Customer::getName() { return name; }// end getName

string Customer::getEmail() { return email; }// end getEmail

string Customer::getPhone() { return phone; }// end getPhone

string Customer::getCar() {return VIN; } // end getCar

// Author:  Steven Albarracin
// Input: None
// Process: check if the customer is a buyer or prospect
// Return: return true if the customer is a buyer, false if the customer is a prospect
bool Customer::checkIfCustomerIsBuyer() {
    if (isBuyer) {
        return true;
    } else {
        return false;
    }
} //end checkIfCustomerIsBuyer()

// Author: Steven Albarracin
// Input: None
// Process: get is buyer status
// Return: return true if the customer is a buyer, false if the customer is a prospect
bool Customer::getIsBuyer() {
    return isBuyer;
} //end getIsBuyer()

// Author: Steven Albarracin
// Input: Buyer status
// Process: set is buyer status
// Return: none
void Customer::setIsBuyer(bool buyer) {
    isBuyer = buyer;
} //end setIsBuyer()
//

