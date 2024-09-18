#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    int id;
    std::string title;
    std::string author;
    bool isIssued;

public:
    Book() = default;
    Book(int id, std::string title, std::string author);

    int getId() const;
    std::string getTitle() const;
    std::string getAuthor() const;
    bool getIsIssued() const;

    void issueBook();
    void returnBook();

    void display() const;
};

#endif
Book::Book(int id, std::string title, std::string author)
    : id(id), title(title), author(author), isIssued(false) {}

int Book::getId() const { return id; }
std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
bool Book::getIsIssued() const { return isIssued; }

void Book::issueBook() { isIssued = true; }
void Book::returnBook() { isIssued = false; }

void Book::display() const {
    std::cout << "Book ID: " << id << "\n";
    std::cout << "Title: " << title << "\n";
    std::cout << "Author: " << author << "\n";
    std::cout << "Issued: " << (isIssued ? "Yes" : "No") << "\n";
}
