#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    int pages;

    Book(string t, string a, int p) {
        title = t;
        author = a;
        pages = p;
    }

    void display() {
        cout << "Title: " << title << ", Author: " << author << ", Pages: " << pages << endl;
    }
};

int main() {
    Book book1("C++ Programming", "Bjarne Stroustrup", 832);
    book1.display();
    return 0;
}
