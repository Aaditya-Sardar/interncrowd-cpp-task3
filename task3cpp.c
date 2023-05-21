#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, string> phoneBook;
    string name, phoneNumber;
    int choice;

    do {
        cout << "Phone Book Menu:\n";
        cout << "1. Add a contact\n";
        cout << "2. Search for a contact\n";
        cout << "3. Remove a contact\n";
        cout << "4. Display all contacts\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter contact name: ";
                cin >> name;
                cout << "Enter phone number: ";
                cin >> phoneNumber;
                phoneBook[name] = phoneNumber;
                cout << "Contact added successfully!\n";
                break;
            case 2:
                cout << "Enter contact name: ";
                cin >> name;
                if (phoneBook.count(name) > 0)
                    cout << "Phone number: " << phoneBook[name] << endl;
                else
                    cout << "Contact not found!\n";
                break;
            case 3:
                cout << "Enter contact name: ";
                cin >> name;
                if (phoneBook.erase(name) == 1)
                    cout << "Contact removed successfully!\n";
                else
                    cout << "Contact not found!\n";
                break;
            case 4:
                cout << "Phone Book:\n";
                for (const auto& contact : phoneBook)
                    cout << contact.first << ": " << contact.second << endl;
                break;
            case 5:
                cout << "Exiting Phone Book. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }

        cout << endl;
    } while (choice != 5);

    return 0;
}
