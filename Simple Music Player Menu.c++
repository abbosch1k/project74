#include <iostream>
using namespace std;

int main() {

    int choice;

    cout << "1 Play\n2 Pause\n3 Stop\n";
    cin >> choice;

    switch(choice) {

        case 1:
            cout << "Playing";
            break;

        case 2:
            cout << "Paused";
            break;

        case 3:
            cout << "Stopped";
            break;
    }
}
