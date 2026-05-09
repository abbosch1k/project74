#include <iostream>
using namespace std;

int main() {

    string pass;

    cout << "Enter password: ";
    cin >> pass;

    if(pass == "admin123")
        cout << "Access Granted";
    else
        cout << "Wrong Password";
}
