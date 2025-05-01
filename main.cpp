#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Car.h"
#include "Customer.h"

using namespace std;

void PopulateCustomers(Customer customers[]);
void linkCustomersToCars(Customer customers[], int custCount,
                         Car      soldCars[],  int carCount); 

/*--------------------- Anh Huy Nguyen------------------------------
Function: displayCustomerList
 Input: 
 - The array of customers and the size of it
 Process: 
  - Calls PopulateCustomers() to read customers data from "Customers.txt"
  - Iterates through the loaded customers
  - Check which customer is a buyer or not by calling getIsBuyer()
  - Calls the customerData() method on each customers  to print their information
-
- Output: 
   - Prints the list of customers and potential buyers to the console 
-------------------------------------------------------------------*/
void displayCustomerList(Customer customers[],int customerCount) {
    PopulateCustomers(customers);
    cout << "\n--- Customer List ---\n";
    for (int i=0; i< customerCount;++i) {
      if(customers[i].getIsBuyer()){
        customers[i].customerData();
      } // end if
    }// end for
    cout <<"\n---- Potential Customer List---\n";
    for (int i=0; i< customerCount;++i) {
      if(!customers[i].getIsBuyer()){
        customers[i].customerData();
      } // end if
    }// end for
    return;
}// End displayCustomerList

/*     displayCarInfo           --Isaiah Fite--
Parameters: The function expects a list of cars

Process: The function iterates through the list of the cars and displays the information
   of each individual car in the list. No changes are made to the list

Return: The function displays the information of each individual car in the list

*/
void displayCarInfo(Car list[]) {
    int index;
    //int listSize = (sizeof(list)/sizeof(list[0])); Dynamic list sizing is not working for now
    for (index = 0; index < 10; ++index) {//Hardcoded listSize for now
        if (list[index].getYear() != 0) {
            list[index].carDetails();
            cout << endl;
        }//end if
    }//end for
    return;
}//end displayCarInfo
/* calculateTotalSales    --Calvin Deming--
Parameters:Takes in the soldCars[] array and the array's size

Process:If car is "sold" add the sold car's price to total sales

Output:Return totalSales back to main so it can be called upon by 
       the display gross sales function
*/
double calculateTotalSales(Car soldCars[], int size){
   double totalSales = 0.0;
   for(int ii = 0; ii < size; ii++){
      if(soldCars[ii].getSold()){
         totalSales += soldCars[ii].getPrice();
      }
   }
   return totalSales;
}

/*
displayGrossSales --Emilio Pinales--
parameter: contain totalSales EP
prossess: will get called and will display the final total gross sales EP
return value: it will return the final gross sale EP
* /
void displayGrossSales(double totalSales) { // void function to display gross sales EP 
    cout << " Total Gross Sales: " << totalSales << endl << endl;
} //end void EP 

/*
   searchInventory --Maria Lazarski--
   Parameters: The function expects an array of cars (either unsold or sold) and a search criterion (make, model, or year).
   Process: The function loops through the array of cars and compares the search criterion with the car's properties.
   Return: It prints the details of the cars that match the search criteria.
*/
void searchInventory(Car list[]) {
    string searchChoice = "0";
    string searchMake, searchModel, searchVin;
    int searchYear;
    int size = 10;
    bool found = false;
    // Ask the user for the search criterion
    cout << "Search by: " << endl;
    cout << "1. Make" << endl;
    cout << "2. Model" << endl;
    cout << "3. Year" << endl;
    cout << "4. VIN" << endl;
    cout << "Enter choice (1-4): ";
    //get user input and get the size of variable. VI
    getline(cin, searchChoice);
    int searchChoiceLength = searchChoice.length();
    // While loop executes until choice is a single digit within range of menu choices. VI
    while ((searchChoiceLength < 1) || (searchChoiceLength > 1) || (!isdigit(searchChoice.at(0))) || (stoi(searchChoice) > 4) || (stoi(searchChoice) < 1)) {
        cout << "Please enter an integer 1-4:";
        getline(cin, searchChoice);
        searchChoiceLength = searchChoice.length();
    }// end while VI
    // Now that input has been validated as a menu choice, convert to int. VI
    int validSearchChoice = stoi(searchChoice);
    if (validSearchChoice == 1) {
        // Search by make
        cout << "Enter car make: ";
        cin.ignore();  // To ignore any leftover newline character
        getline(cin, searchMake);
        //Iterates through the list to find searched for car
        for (int i = 0; i < size; ++i) {
            if (list[i].getMake() == searchMake) {
                list[i].carDetails();
                found = true;
            }//end if
        }//end for

    }
    else if (validSearchChoice == 2) {
        // Search by model
        cout << "Enter car model: ";
        cin.ignore();  // To ignore any leftover newline character
        getline(cin, searchModel);
        //Iterates through the list to find searched for car
        for (int i = 0; i < size; ++i) {
            if (list[i].getModel() == searchModel) {
                list[i].carDetails();
                found = true;
            }//end if
        }//end for
    }//end else if
    else if (validSearchChoice == 3) {
        // Search by year
        cout << "Enter car year: ";
        cin >> searchYear;
        //Iterates through the list to find searched for car
        for (int i = 0; i < size; ++i) {
            if (list[i].getYear() == searchYear) {
                list[i].carDetails();
                found = true;
            }//end if
        }//end for
    }//end else if
    else if (validSearchChoice == 4) {
        // Search by VIN
        cout << "Enter car VIN: ";
        cin >> searchVin;
        //Iterates through the list to find searched for car
        for (int i = 0; i < size; ++i) {
            if (list[i].getVin() == searchVin) {
                list[i].carDetails();
                found = true;
            }//if
        }//end for
    }//end else if
    else {
        cout << "Invalid search choice. Please enter 1, 2,3, or 4." << endl;
    }//end else

    if (!found) {
        cout << "No cars found based on search" << endl;
    }//end if
    //Function returns void 
    return;
}// ends search function

/* displayMenu
Name: Isaac Seyer
Name: Victor Ibarra
Input: The user will input an integer between 1 and 6 (inclusive) to choose an option

Process: The function first initializes the variable to store the user's choice, then displays the menu. The function then asks for
the user's input and checks if it is a valid answer. If it is not, the function asks for the user's input again and clarifies what
are valid inputs, then checks again. If the input is valid, it returns the user's input;

Output: an integer ranging from 1-6 (inclusive)
*/
int displayMenu() {
    // variable for user input IS
    string choice = "0";
    // following six lines display menu IS
    cout << "1. Display Available Car Information" << endl;
    cout << "2. Display Sold Car Information" << endl;
    cout << "3. Search Available Inventory" << endl;
    cout << "4. Sell Car" << endl;
    cout << "5. Display Gross Sales" << endl;
    cout << "6. Exit Program" << endl;
    cout << "7. Display user list" << endl;
    cout << "Enter choice as integer: ";
    //get user input and get the size of variable. VI
    getline(cin, choice);
    int choiceLength = choice.length();
    // While loop executes until choice is a single digit within range of menu choices. VI
    while ((choiceLength < 1) || (choiceLength > 1) || (!isdigit(choice.at(0))) || (stoi(choice) > 7) || (stoi(choice) < 1)) {
        cout << "Please enter an integer 1-7:";
        getline(cin, choice);
        choiceLength = choice.length();
    }// end while IS
  
    // Now that input has been validated as a menu choice, convert to int. VI
    int validatedChoice = stoi(choice);
    return validatedChoice;
  
}// end menuDisplay IS

//PopulateInventory: Lexi Cocaign
//Input:Gets array from main to put info into-LC
 //Process: Opens file and puts info from file into object that then gets added to the array -LC
 // Output: function returns void -LC
void PopulateInventory(Car unsoldCars[]) {
    //Declarations-LC
    ifstream inFS;
    int currIndex = 0, year = 0;
    double price = 0;
    string make, model, vin, loopCount, yearString, priceString, color;
    //Open car inventory file to get input from-LC
    inFS.open("CarInventory.txt");
    //Check if file opened successfully -LC
    if (!inFS.is_open()) {
        cout << "Could not open CarInventory.txt" << endl;
    }//end if
    //loopCount variable to
    getline(inFS, loopCount);
    while (loopCount.size() != 0) {
        //get info from file and convert strings into nums if needed-LC
        getline(inFS, priceString);
        price = stod(priceString);
        getline(inFS, yearString);
        year = stoi(yearString);
        getline(inFS, make);
        getline(inFS, model);
        getline(inFS, vin);
        getline(inFS, color);
        //creates car variable to store data in-LC
        Car currCar(price, year, make, model, true, vin, color);
        //car gets put into the array at currIndex-LC
        unsoldCars[currIndex] = currCar;
        //Increment currIndex for next iteration of loop -LC
        currIndex += 1;
        getline(inFS, loopCount);
    }//end while
    //close file when done-LC
    inFS.close();
    return;
}//end PopulateInventory

// Kyle Kuchle
void markCarAsSold(Car unsoldCars[], Car soldCars[]) {  
   int carSize = sizeof(unsoldCars)/ sizeof(unsoldCars[0]);//Changed size to be calculated Calvin D
   Car blankCar();
   string carVin;
   cout << "Please enter the vin number for the car you want to buy: " << endl;
   cin >> carVin;
   for (int ii = 0; ii < carSize; ++ii) {
      if (unsoldCars[ii].getVin() == carVin) {
         soldCars[ii] = unsoldCars[ii]; // update soldCars array
         unsoldCars[ii] = blankCar; // clears car space in unsoldCars 
         calculateTotalSales(Car soldCars[], carSize);
      }
   } // end for KK
} // end returnCarSold KK

/*     CarDealershipMain
Input: The program will expect numbers as input to traverse the menus and reach the desired function.
   Then the user will be prompted for specific input within each function. Input required in the search functionality
   is the make, model or year being searched for. Input required in the sell car functionality is the VIN number.
   Input of a 6 is also required to exit the program.

Process: This program will populate two arrays with the information of the unsold and sold cars from external files
   Then the program will expect numbers as input to traverse the menus and reach the desired function.
   Then the user will be prompted for specific input within each function. This programs functions
   include: A function that displays the information of the sold and unsold cars. Searching the lists of sold
   and unsold cars to find cars based on make, model, and yea. Another function to sell a car moving it
   from the unsold list to the sold car list. Then the function to display the Gross Sales for all of the
   cars sold during this instance of the program. Then whenever the program is exitted, the inventory of the
   sold and unsold cars is exportted to external files.

Output: Each time this program runs the menu is displayed and there is a possiblity for each function to run. Depending
   on the functions selected there will be a different output. From the different functions you can expect:
   A list of car information when you display the information of sold or unsold cars.
   Prompts for the type of search and a display of the search result when searching for a car.
   Prompts the user for the to be sold car's VIN number as well as conformation or not for whether the car has been sold.
   when using the sell car functionality.
   Then a display of the gross sales for the day when gross sales is selected.
   Output will cease as soon as the program is exited in the main menu by the user.
*/

int main(int argc, char* argv[]) {
    //Declarations IF
    Car soldCars[10], unsoldCars[10];
    Customer customers[12];
    int userChoice;
    double totalSales = 0.0;
    const int numCustomers= 10; // The number of customers 

    //Load in car inventory information
    PopulateInventory(unsoldCars);
    //Load in customer information
    PopulateCustomers(customers);

    //Display menu and functionality selection
    userChoice = displayMenu();
    while ((userChoice > 0) && (userChoice <= 7)) {
        switch (userChoice) {
            // Display Available Car Information IS
        case 1:
            displayCarInfo(unsoldCars);
            break;
        // Display Sold Car Information IS
        case 2:
            displayCarInfo(soldCars);
            break;
        // Search Available Inventory IS
        case 3:
            searchInventory(unsoldCars);
            break;
        // Sell Car
        case 4:
            markCarAsSold(unsoldCars, soldCars);
            break;
        // Display Gross Sales
        case 5:
            totalSales = calculateTotalSales(soldCars, 10);
            displayGrossSales(totalSales);
            break;
            case 6:
            cout <<" Exiting program......" << endl;
            return 0;
        case 7:
        displayCustomerList(customers,numCustomers);
        break; 
        // disPlay customer list
        default:
            cout << "This is an unacceptable selection." << endl;
            break;
        }//end switch
        userChoice = displayMenu();      //redisplay menu and update the selection
    }//end while

    //export car inventory information
}//end main

/* INPUT PARM: Customer array.
 * PROCESS: Populating the customers from the "Customers.txt" file.
 * RETURN VALUE: None.
 */
void PopulateCustomers(Customer customers[]) {
    ifstream FS;
    string isBuyerStr;
    int loopCount = 10; // The number of customers to iterate through. // Temp.
    string name, email, phone, vin = "";
    bool isBuyer;
    
    FS.open("Customers.txt"); // Note: Make sure name is right.
    
    if (!FS.is_open()) { // Check if file opened successfully
        cout << "Could not open Customers.txt" << endl;
    }//end if
    
    int i = 0;
    while (loopCount > 0) {
        // get info from file and convert strings into nums if needed
        getline(FS, name, ',');
        getline(FS, email, ',');
        getline(FS, phone, ',');
        getline(FS, isBuyerStr, ',');
        //getline(FS, vin); // Note: Nobody has bought cars yet.
        
        // Creates Customer object to store data in:
        Customer currCustomer;//(name, email, phone, isBuyer, vin);
        currCustomer.setName(name);
        currCustomer.setEmail(email);
        currCustomer.setPhone(phone);
        //currCustomer.purchase();
        currCustomer.setIsBuyer(isBuyer);
        
        customers[i] = currCustomer; // Customer gets put into the array at i
        i++;
    }//end while
    
    FS.close(); // closes file when done
    return;
}//end PopulateCustomers

// Author: Chitra Youm 
// Link every buying customer to the car they purchased.        
void linkCustomersToCars(Customer customers[], int custCount,
                         Car      soldCars[],  int carCount)
{ 
    for (int ii = 0; ii < custCount; ++ii) { 
        if (!customers[ii].getIsBuyer()) 
            continue; // skip who isn't a buyer 
        string custVin = customers[ii].getPurchasedVin(); 
        bool linked = false; // When the car wasn't linked to a customer yet. 

        // find the matching Car in soldCars[] 
        for (int jj = 0; jj < carCount; ++jj) { 
            if (soldCars[jj].getVin() == custVin) { 
                // link both ways 
                customers[ii].purchase(custVin); 
                customers[ii].setIsBuyer(true); 
                soldCars[jj].setSold(true); 
                linked = true; 
            } 
        } 
        if (!linked) { 
            cout << "Buyer " << customer[ii].getName() 
                 << " has Vin " << custVin 
                 << " but no matching car was found.\n" << endl; 
        } 
    } 
} 


