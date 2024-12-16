#include <iostream>
#include <string>

using namespace std;

const int max_users = 150;

string name[max_users];
string gender[max_users];
string cnic[max_users];
string contact[max_users];
string membershipPlan[max_users];
string paymentPreference[max_users];
int age[max_users];

bool isValidAge(int age) {
    return age >= 15;
}

void takeUserDetails(int index);
void displayUserDetails(int index);

int main() {
    int userCount = 0;
    char choice;

    cout << "Welcome to the Gym Management System!" << endl;

    do {
        if (userCount >= max_users) {
            cout << "Maximum user limit reached. Cannot add more members." << endl;
            break;
        }

        cout << "Entering details for member " << (userCount + 1) << ":" << endl;
        takeUserDetails(userCount);
        displayUserDetails(userCount);
        userCount++;
        cout << endl << endl;

        cout << "If you wish to enter another member, press 'Y'. To stop, press any other key: ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "Thank you for using the Gym Management System!" << endl;
    return 0;
}

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



void displayUserDetails(int index) {
    cout << "\nUser Details:" << endl;
    cout << "Name: " << name[index] << endl;
    cout << "Gender: " << gender[index] << endl;
    cout << "CNIC: " << cnic[index] << endl;
    cout << "Age: " << age[index] << endl;
    cout << "Contact Number: " << contact[index] << endl;
    cout << "Membership Plan: " << membershipPlan[index] << endl;
    cout << "Payment Preference: " << paymentPreference[index] << endl;
}

