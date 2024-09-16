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
