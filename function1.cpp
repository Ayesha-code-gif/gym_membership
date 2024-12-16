void takeUserDetails(int index) {
    cout << "Enter your name: ";
    cin >> name[index];

    cout << "Enter your gender (Male/Female/Other): ";
    cin >> gender[index];

    cout << "Enter your CNIC: ";
    cin >> cnic[index];

    while (true) {
        cout << "Enter your age: ";
        cin >> age[index];
        if (isValidAge(age[index])) {
            break;
        } else {
            cout << "Age must be 15 or older. Please try again." << endl;
        }
    }

    cout << "Enter your contact number: ";
    cin >> contact[index];
    cout << endl << endl;

  
