
/*
   searchInventory --Maria Lazarski--
   Parameters: The function expects an array of cars (either unsold or sold) and a search criterion (make, model, or year).
   Process: The function loops through the array of cars and compares the search criterion with the car's properties.
   Return: It prints the details of the cars that match the search criteria.
*/
void searchInventory(Car list[], int size) {
    int searchChoice;
    string searchMake, searchModel;
    int searchYear;

    // Ask the user for the search criterion
    cout << "Search by: " << endl;
    cout << "1. Make" << endl;
    cout << "2. Model" << endl;
    cout << "3. Year" << endl;
    cout << "Enter choice (1-3): ";
    cin >> searchChoice;

    if (searchChoice == 1) {
        // Search by make
        cout << "Enter car make: ";
        cin.ignore();  // To ignore any leftover newline character
        getline(cin, searchMake);

        bool found = false;
        for (int i = 0; i < size; ++i) {
            if (list[i].getMake() == searchMake) {
                list[i].carDetails();
                found = true;
            }
        }

        if (!found) {
            cout << "No cars found for make: " << searchMake << endl;
        }

    } else if (searchChoice == 2) {
        // Search by model
        cout << "Enter car model: ";
        cin.ignore();  // To ignore any leftover newline character
        getline(cin, searchModel);

        bool found = false;
        for (int i = 0; i < size; ++i) {
            if (list[i].getModel() == searchModel) {
                list[i].carDetails();
                found = true;
            }
        }

        if (!found) {
            cout << "No cars found for model: " << searchModel << endl;
        }

    } else if (searchChoice == 3) {
        // Search by year
        cout << "Enter car year: ";
        cin >> searchYear;

        bool found = false;
        for (int i = 0; i < size; ++i) {
            if (list[i].getYear() == searchYear) {
                list[i].carDetails();
                found = true;
            }
        }

        if (!found) {
            cout << "No cars found for year: " << searchYear << endl;
        }

    } else {
        cout << "Invalid search choice. Please enter 1, 2, or 3." << endl;
    }
}// ends search function
