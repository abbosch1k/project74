#include <iostream>
using namespace std;

int main() {

    double balance = 5000;

    int choice;
    double money;

    do {

        cout << "\n=== BANK SYSTEM ===\n";
        cout << "1. Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "0. Exit\n";

        cin >> choice;

        switch(choice) {

            case 1:
                cout << balance;
                break;

            case 2:
                cin >> money;
                balance += money;
                break;

            case 3:
                cin >> money;

                if(money <= balance)
                    balance -= money;
                else
                    cout << "Not enough money";

                break;
        }

    } while(choice != 0);
}
