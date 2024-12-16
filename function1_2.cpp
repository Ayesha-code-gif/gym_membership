cout << "Choose a membership plan:" << endl;
    cout << "1. Premium (Personal trainer, early hours, whole day)" << endl;
    cout << "2. Standard (Early hours, whole day)" << endl;
    cout << "3. Basic (Whole day)" << endl;
    int planChoice;
    cin >> planChoice;

    cout << endl << endl;

    switch (planChoice) {
    case 1:
        membershipPlan[index] = "Premium";
        break;
    case 2:
        membershipPlan[index] = "Standard";
        break;
    case 3:
        membershipPlan[index] = "Basic";
        break;
    default:
        cout << "Invalid choice. Defaulting to Basic plan." << endl;
        membershipPlan[index] = "Basic";
    }

    cout << "Choose a payment preference:" << endl;
    cout << "1. Cash" << endl;
    cout << "2. Card" << endl;
    int paymentChoice;
    cin >> paymentChoice;

    cout << endl << endl;

    switch (paymentChoice) {
    case 1:
        paymentPreference[index] = "Cash";
        break;
    case 2:
        paymentPreference[index] = "Card";
        break;
    default:
        cout << "Invalid choice. Defaulting to Cash payment." << endl;
        paymentPreference[index] = "Cash";
    }
}
