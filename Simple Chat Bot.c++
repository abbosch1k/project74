#include <iostream>
using namespace std;

int main() {

    string text;

    cin >> text;

    if(text == "hello")
        cout << "Hi!";
    else if(text == "bye")
        cout << "Goodbye!";
    else
        cout << "I don't understand";
}
