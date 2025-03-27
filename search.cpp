/*
   searchInventory --Maria Lazarski--
   Parameters: The function expects an array of cars (either unsold or sold) and a search criterion (make, model, or year).
   Process: The function loops through the array of cars and compares the search criterion with the car's properties.
   Return: It prints the details of the cars that match the search criteria.
*/
void searchInventory(Car list[]) {
    int searchChoice;
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
    cin >> searchChoice;

    if (searchChoice == 1) {
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

    } else if (searchChoice == 2) {
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
    else if (searchChoice == 3) {
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
    else if (searchChoice == 4) {
        // Search by VIN
        cout << "Enter car VIN: ";
        cin >> searchVIN;
        //Iterates through the list to find searched for car
        for (int i = 0; i < size; ++i) {
            if (list[i].getVin() == searchYear) {
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