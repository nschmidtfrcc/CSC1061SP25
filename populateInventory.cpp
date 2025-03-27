#include <iostream>
#include <fstream>
#include <string>
#include "car.h"
using namespace std;
//PopulateInventory: Lexi Cocaign
//Input:Gets array from main to put info into-LC
 //Process: Opens file and puts info from file into object that then gets added to the array -LC
 // Output: function returns void -LC
void PopulateInventory(Car unsoldCars[]) {
  //Declarations-LC
  ifstream inFS;
  int currIndex = 0, year = 0;
  double price = 0;
  string make , model, vin, loopCount, yearString, priceString;
//Open car inventory file to get input from-LC
  inFS.open("CarInventory.txt");
  //Check if file opened successfully -LC
  if(!inFS.is_open()){
    cout << "Could not open CarInventory.txt" << endl;
  }//end if
  //loopCount variable to
  getline(inFS, loopCount);
  while(loopCount.size() != 0){
      //get info from file and convert strings into nums if needed-LC
    getline(inFS,priceString);
    price = stod(priceString);
    getline(inFS,yearString);
    year = stoi(yearString);
    getline(inFS,make);
    getline(inFS,model);
    getline(inFS,vin);
    getline(inFS, loopCount);
    //creates car variable to store data in-LC
    Car currCar(price, year, make, model, true, vin);
    //car gets put into the array at currIndex-LC
    unsoldCars[currIndex] = currCar;
    //Increment currIndex for next iteration of loop -LC
    currIndex += 1;

  }//end while
  //close file when done-LC
  inFS.close();
  return;
}//end PopulateInventory
