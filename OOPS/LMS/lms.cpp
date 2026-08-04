#include<bits/stdc++.h>
using namespace std;

class Book {
    private:
    int bookID;
    string bookName;
    string author;
    double price;
    bool available;

    public:
    Book(int id, string name, string author, double price) {
        available = true;
        bookID = id;
        bookName = name;
        this->author = author;
        this->price = price;
    }

    void issueBook() {
        if (available) {
            available = false;
            cout << "Book " << bookName << " issued." << endl;
        }
        else {
            cout << "Book " << bookName << " not available." << endl;
        }
    }

    void returnBook() {
        if(available) {
            cout << "Book " << bookName << " isn't issued yet." << endl;
        }
        else {
            available = true;
            cout << "Book " << bookName << " returned." << endl;
        }
    }


    int getID() {
        return bookID;
    }
    pair<string, string> getInfo() {
        return {bookName, author};
    }
    double getPrice() {
        return price;
    }
    double checkAvail() {
        return available;
    }

    void displayBook() {
        cout << "Name: " << getInfo().first << ", " << getInfo().second << endl;
        cout << "ID: " << getID() << endl;
        cout << "Price: " << getPrice() << endl;
cout << (checkAvail()? "Yes" : "No") << endl;
    }

};

int main() {
    Book b1(101, "Book1", "Bhavik Patel", 599);
    Book b2(102, "Book2", "Vir Parmar", 400);
    Book b3(103, "Book3", "Neev 22", 900);

    b1.issueBook();
    b2.issueBook();
    // b3.issueBook();

    // checking repeat issues 
    b1.issueBook();
    b2.issueBook();

    b1.displayBook();
    b2.displayBook();
    b3.displayBook();


    b1.returnBook();
    b2.returnBook();
    b3.returnBook();



    return 0;
    
}