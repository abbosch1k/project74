#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> tasks;

    int choice;
    string task;

    do {

        cout << "1 Add\n2 Show\n0 Exit\n";
        cin >> choice;

        switch(choice) {

            case 1:
                cin >> task;
                tasks.push_back(task);
                break;

            case 2:
                for(string t : tasks)
                    cout << t << endl;
        }

    } while(choice != 0);
}
