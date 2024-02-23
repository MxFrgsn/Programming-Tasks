#include <iostream>
#include <string>
using namespace std;

// Moderate to difficult

class Book {
public:
    string title;
    string author;
    int pages;

    Book(string title_const, string author_const, int pages_const)
    {
        title = title_const;
        author = author_const;
        pages = pages_const;
    }
    // Constructor to implement
    // Display method to implement
    void display_book()
    {
        cout << "Title: " << title << "\nAuthor: " << author << "\nNumber of Pages: " << pages << endl;
    }
};

int main() {
    Book book1("C++ Programming", "Bjarne Stroustrup", 832);
    // Call the display method for book1
    book1.display_book();
    return 0;
}
