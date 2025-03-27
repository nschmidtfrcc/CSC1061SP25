#include "car.h"

#include <iostream>
#include <string>

using namespace std;

//Input: No parameters or arguments
//Process: Set empty variables for price, year, make, model, sold, and VIN
//Output: The empty variables for price, year, make, model, sold, and VIN
Car::Car() {
   carPrice = 0;
   carYear = 0;
   carMake = "X";
   carModel = "X";
   carSold = true;
   carVin = "X";
}//end default constructor. JK

//Input: The car's price, year, make, model, whether it is sold or not, and its VIN.
//Process: Set the private variables for price, year, make, model, sold, and VIN with its corresponding parameters.
//Output: The private variables for price, year, make, model, sold, and VIN
Car::Car(double price, int year, string make, string model,bool sold, string vin) {
   carPrice = price;
   carYear = year;
   carMake = make;
   carModel = model;
   carSold = sold;
   carVin = vin;
}//end parameterized constructor. JK

//Input: The car's price
//Process: set the variable carPrice to be the inputted price.
//Output: The private variable for the car's price.
void Car::setPrice(double price) {
   carPrice = price;
}//end setPrice(). JK

//Input: The private car's price variable.
//Process: Return the car's price back to the user.
//Output: The car's price.

double Car::getPrice() {
   return carPrice;
}//end getPrice(). JK

//Input: The car's year
//Process: Set the private variable carYear to be the inputted year variable.
//Output: carYear to the rest of the class.
void Car::setYear(int year) {
   carYear = year;
}//end setYear(). JK

//Input: The variable carYear from the private variables
//Process: Return the carYear as a variable back to the user.
//Output: carYear
int Car::getYear() {
   return carYear;
}//end getYear(). JK

//Input: The string for the car's make
//Process: Set the internal variable carMake to be the inputted make variable
//Output: The carMake variable to the rest of the Car class
void Car::setMake(string make) {
   carMake = make;
}//end setMake(). JK

//Input: The carMake string
//Process: Return the carMake variable to the user as a variable
//Output: carMake variable
string Car::getMake() {
   return carMake;
}//end getMake(). JK

//Input: The car's model
//Process: Set the private variable carModel to be the car's model that is inputted.
//Output: The carModel variable to the rest of the Car class.
void Car::setModel(string model) {
   carModel = model;
}//end setModel(). JK

//Input: The private variable carModel
//Process: Return the carModel variable back to the user as a variable.
//Output: The car's model.
string Car::getModel() {
   return carModel;
}//end getModel(). JK

//Input: Whether or not the car is sold as a bool
//Process: Set the private bool variable carSold to be the inputted sold variable.
//Output: The carSold bool to the rest of the Car class.
void Car::setSold(bool sold) {
   carSold = sold;
}//end setSold(). JK

//Input: The carSold private variable
//Process: Return the bool carSold to the user as a bool value.
//Output: The carSold boolean.
bool Car::getSold() {
   return carSold;
}//end getSold(). JK

//Input: The car's VIN.
//Process: Set the private variable carVin to be the inputted vin variable.
//Output: The carVin variable to the rest of the Car class.
void Car::setVin(string vin) {
   carVin = vin;
}//end setVin(). JK

//Input: The private carVin variable
//Process: Return the carVin variable back to the user.
//Output: the carVin variable
string Car::getVin() {
   return carVin;
}//end getVin(). JK

//Input: The private variables for the car's year, make, model, price, and VIN.
//Process: Output the details of the car (year, make, model, etc) to the user
//Output: The car's year, make, model, price, and VIN to the user.
void Car::carDetails() {
   cout << "Car Year: " << carYear << ". Car Make and Model: " << carMake << " " << carModel << ". Car Price: $" << carPrice << ". Car VIN: " << carVin;
}//end carDetails(). JK
