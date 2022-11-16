#include <iostream>
#include <vector>
#include "book.hpp"

using namespace std;

int main()
{
    vector<book> list_of_books;

    list_of_books.insert(list_of_books.begin(), a_book1);
    list_of_books.insert(list_of_books.begin(), a_book2);
    list_of_books.insert(list_of_books.end(), a_book3);
    list_of_books.insert(list_of_books.begin() + 2, a_book4);

    for (auto x : list_of_books)
        x.print_info();

    list_of_books.erase(list_of_books.begin());
    list_of_books.erase(list_of_books.begin() + 2);

    for (auto x : list_of_books)
        x.print_info();

    return 0;
}