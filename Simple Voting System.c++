#include <iostream>
using namespace std;

int main() {

    int vote1=0,vote2=0;
    int choice;

    for(int i=0;i<5;i++) {

        cin >> choice;

        if(choice==1)
            vote1++;
        else
            vote2++;
    }

    cout << "Candidate1: " << vote1 << endl;
    cout << "Candidate2: " << vote2 << endl;
}
