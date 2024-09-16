#include <iostream>
#include <fstream>
#include "book.h"
#include "student.h"

using namespace std;

// Function prototypes
void addBook();
void displayBooks();
void addStudent();
void issueBook();
void returnBook();

int main() {
    int choice;

    do {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Add Student\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                addStudent();
                break;
            case 4:
                issueBook();
                break;
            case 5:
                returnBook();
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 0);

    return 0;
}

// Function definitions
void addBook() {
    // Code to add book to the file
}

void displayBooks() {
    // Code to display all books
}

void addStudent() {
    // Code to add student to the file
}

void issueBook() {
    // Code to issue book to student
}

void returnBook() {
    // Code to return book
}
