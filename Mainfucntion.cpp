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
