#include <iostream>
using namespace std;

int main() {

    bool rooms[5] = {0,0,0,0,0};

    int choice, room;

    do {

        cout << "\n=== HOTEL BOOKING SYSTEM ===\n";
        cout << "1. Show Rooms\n";
        cout << "2. Book Room\n";
        cout << "3. Check Room\n";
        cout << "0. Exit\n";
        cin >> choice;

        switch(choice) {

            case 1:

                for(int i=0;i<5;i++) {

                    cout << "Room "
                         << i+1
                         << " : ";

                    if(rooms[i]==0)
                        cout << "Free\n";
                    else
                        cout << "Booked\n";
                }

                break;

            case 2:

                cout << "Enter room number: ";
                cin >> room;

                if(rooms[room-1]==0) {

                    rooms[room-1]=1;
                    cout << "Room booked!\n";
                }
                else {

                    cout << "Already booked!\n";
                }

                break;

            case 3:

                cout << "Enter room number: ";
                cin >> room;

                if(rooms[room-1]==0)
                    cout << "Room is free\n";
                else
                    cout << "Room is booked\n";

                break;
        }

    } while(choice != 0);
}
