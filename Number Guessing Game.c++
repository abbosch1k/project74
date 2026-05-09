#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int secret = rand()%100;
    int guess;

    do {

        cin >> guess;

        if(guess > secret)
            cout << "Too big\n";

        else if(guess < secret)
            cout << "Too small\n";

    } while(guess != secret);

    cout << "You Win!";
}
