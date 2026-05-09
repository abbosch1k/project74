#include <iostream>
using namespace std;

int main() {

    int item;

    cout << "1 Burger - 20\n";
    cout << "2 Cola - 10\n";

    cin >> item;

    switch(item) {

        case 1:
            cout << "You bought Burger";
            break;

        case 2:
            cout << "You bought Cola";
            break;
    }
}
