#include <iostream>
using namespace std;

int main() {

    int x = 5;
    int y = 5;

    char move;

    while(true) {

        system("cls");

        for(int i=0;i<10;i++) {

            for(int j=0;j<20;j++) {

                if(i==y && j==x)
                    cout << "O";
                else
                    cout << ".";
            }

            cout << endl;
        }

        cout << "W A S D to move: ";
        cin >> move;

        switch(move) {

            case 'w':
                y--;
                break;

            case 's':
                y++;
                break;

            case 'a':
                x--;
                break;

            case 'd':
                x++;
                break;
        }

        if(x<0) x=0;
        if(y<0) y=0;
        if(x>19) x=19;
        if(y>9) y=9;
    }
}
