#include <iostream>
#include <queue>
#include "book.hpp"

using namespace std;

void print_queue(queue<book> q)
{
    while (!q.empty())
    {
        q.front().print_info();
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<book> queue_of_books;

    queue_of_books.push(a_book1);
    queue_of_books.push(a_book2);
    queue_of_books.push(a_book3);
    queue_of_books.push(a_book4);

    print_queue(queue_of_books);

    return 0;
}
