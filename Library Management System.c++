#include <iostream>
#include <vector>
using namespace std;

struct Book {
    string title;
    string author;
};

int main() {

    vector<Book> books;

    int choice;

    do {
        cout << "\n=== LIBRARY SYSTEM ===\n";
        cout << "1. Add Book\n";
        cout << "2. Show Books\n";
        cout << "3. Search Book\n";
        cout << "0. Exit\n";
        cin >> choice;

        switch(choice) {

            case 1: {
                Book b;

                cout << "Title: ";
                cin >> b.title;

                cout << "Author: ";
                cin >> b.author;

                books.push_back(b);

                break;
            }

            case 2: {
                for(int i=0;i<books.size();i++) {
                    cout << books[i].title
                         << " - "
                         << books[i].author
                         << endl;
                }

                break;
            }

            case 3: {
                string name;
                cin >> name;

                for(int i=0;i<books.size();i++) {

                    if(books[i].title == name) {
                        cout << "Found!\n";
                    }
                }

                break;
            }
        }

    } while(choice != 0);
}
