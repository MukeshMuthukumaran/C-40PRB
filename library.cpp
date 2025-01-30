#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string bookName;
    int idNumber;
    string authorName;

public:
    Book() {
        bookName = "";
        idNumber = 0;
        authorName = "";
    }

    Book(string name, int id, string author) {
        bookName = name;
        idNumber = id;
        authorName = author;
    }

    void displayBook() {
        if (idNumber != 0) {  // Check if book exists
            cout << "\nBook ID: " << idNumber << endl;
            cout << "Book Name: " << bookName << endl;
            cout << "Author Name: " << authorName << endl;
        }
    }
};

class Library {
private:
    static const int MAX_BOOKS = 100;  // Maximum number of books
    Book books[MAX_BOOKS];
    int bookCount;

public:
    Library() {
        bookCount = 0;
    }

    void addBook() {
        if (bookCount >= MAX_BOOKS) {
            cout << "\nLibrary is full! Cannot add more books." << endl;
            return;
        }

        string name, author;
        int id;

        cout << "\nEnter Book ID: ";
        cin >> id;
        cin.ignore();
        
        cout << "Enter Book Name: ";
        getline(cin, name);
        
        cout << "Enter Author Name: ";
        getline(cin, author);

        books[bookCount] = Book(name, id, author);
        bookCount++;
        cout << "\nBook added successfully!" << endl;
    }

    void displayAllBooks() {
        if (bookCount == 0) {
            cout << "\nNo books in library." << endl;
            return;
        }
        
        cout << "\n=== Library Books ===" << endl;
        for (int i = 0; i < bookCount; i++) {
            books[i].displayBook();
        }
    }
};

int main() {
    Library lib;
    int choice;

    do {
        cout << "\n=== Library Menu ===" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display All Books" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                lib.addBook();
                break;
            case 2:
                lib.displayAllBooks();
                break;
            case 3:
                cout << "\nExiting program. Goodbye!" << endl;
                break;
            default:
                cout << "\nInvalid choice! Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}