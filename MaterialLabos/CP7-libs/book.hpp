#include <iostream>
using namespace std;

class book
{
private:
    string title;
    string author;
    int ID;

public:
    book(string, string, int);
    void print_info();
};

book::book(string _title, string _author, int _ID)
{
    this->title = _title;
    this->author = _author;
    this->ID = _ID;
}

void book::print_info(){
    cout << "\n\nTitle: " << this->title;
    cout << "\nAuthor: " << this->author;
    cout << "\nID: " << this->ID;
}

book a_book1 = book("La Odisea", "Homero", 1684);
book a_book2 = book("La Iliada", "Homero", 4875);
book a_book3 = book("Edipo Rey", "Sofocles", 4862);
book a_book4 = book("Prometeo Encadenado", "Esquilo", 6851);