#include <iostream>
using namespace std;

int main() {

    int grade;
    cin >> grade;

    if(grade >= 90)
        cout << "A";

    else if(grade >= 70)
        cout << "B";

    else
        cout << "C";
}
