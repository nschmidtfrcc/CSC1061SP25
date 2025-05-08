#include "Customer.h"
#include <iostream>
#include <string>

///// CONSTRUCTORS /////

//Author: Sawyer Anderson
//Input: None
//Process: Assigns all Customer value to a default
//Output: Prints warning message that default values are in use
Customer::Customer() {
   name = "X";
   email = "X";
   phone = "X";
   VIN = "X";
   isBuyer = false;
   cout << "WARNING: Customer Data is Null" << endl;
}//end Customer default constructor


//Author: Sawyer Anderson
//Input: Takes inputs for name, email, phone number, vin, and if customer is a buyer
//Process: Assigns customer values to the given inputs
//Output: No returns or outputs
Customer::Customer(string nn, string ee, string pp, string vv, bool bb) {
   name = nn;
   email = ee;
   phone = pp;
   VIN = vv;
   isBuyer = bb;
}//end Customer parameterized constructor

///// SETTERS /////

//Author: Sawyer Anderson
//Input: Takes a string
//Process: Assigns name to the string
//Output: No outputs
void Customer::setName(string nn) { name = nn; }// end setName

//Author: Sawyer Anderson
//Input: Takes a string
//Process: Assigns email to the string
//Output: No outputs
void Customer::setEmail(string ee) { email = ee; }// end setEmail

//Author: Sawyer Anderson
//Input: Takes a string
//Process: Assigns phone to the string
//Output: No outputs
void Customer::setPhone(string pp) { phone = pp; }// end setPhone

//Author: Sawyer Anderson
//Input: Takes a string
//Process: Assigns VIN to the string
//Output: No outputs
void Customer::purchase(string vv) { VIN = vv; }// end purchase

// Author: Steven Albarracin
// Input: Buyer status
// Process: set is buyer status
// Return: none
void Customer::setIsBuyer(bool buyer) { isBuyer = buyer; } //end setIsBuyer()

///// GETTERS /////

//Author: Sawyer Anderson
//Input: None
//Process: Gets all customer data
//Output: Prints all customer data
void Customer::customerData() {
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

//Author: Sawyer Anderson
//Input: None
//Process: Gets name variable
//Output: Returns name
string Customer::getName() { return name; }// end getName

//Author: Sawyer Anderson
//Input: None
//Process: Gets email variable
//Output: Returns email
string Customer::getEmail() { return email; }// end getEmail

//Author: Sawyer Anderson
//Input: None
//Process: Gets phone variable
//Output: Returns phone
string Customer::getPhone() { return phone; }// end getPhone

string Customer::getCar() {return VIN; } // end getCar

// Author: Steven Albarracin
// Input: None
// Process: get is buyer status
// Return: return true if the customer is a buyer, false if the customer is a prospect
bool Customer::getIsBuyer() { return isBuyer; } //end getIsBuyer()

// Author:  Steven Albarracin
// Input: None
// Process: check if the customer is a buyer or prospect
// Return: return true if the customer is a buyer, false if the customer is a prospect
bool Customer::checkIfBuyer() {
    return isBuyer;
} //end checkIfBuyer()

