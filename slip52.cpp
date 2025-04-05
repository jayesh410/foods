#include <iostream>
#include <string>
using namespace std;

class Book {
    string name;
    string author;
    float price;

public:
    void acceptDetails(string N, string A, float P) {
        name = N;
        author = A;
        price = P;
    }

    void displayDetails() {
        cout << "Book Name: " << name << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }

    // Function to display books by a specific author
    void displayDetails(string auth) {
        if (author == auth) {
            displayDetails();
        }
    }

    // Function to display books by a specific price
    void displayDetails(float p) {
        if (this->price == p) { // Use "this->price" to avoid ambiguity
            displayDetails();
        }
    }
};

int main() {
    Book book1, book2, book3;

    book1.acceptDetails("C++ Programming", "Bjarne Stroustrup", 29.99);
    book2.acceptDetails("The C++ Programming Language", "Bjarne Stroustrup", 39.99);
    book3.acceptDetails("Effective C++", "Scott Meyers", 25.99);

    cout << "\nDisplaying all books:\n";
    book1.displayDetails();
    book2.displayDetails();
    book3.displayDetails();

    cout << "\nDisplaying books by author 'Bjarne Stroustrup':\n";
    book1.displayDetails("Bjarne Stroustrup");
    book2.displayDetails("Bjarne Stroustrup");  // Also check book2

    cout << "\nDisplaying books with price $29.99:\n";
    book1.displayDetails(29.99);

    return 0;
}
