#include <iostream>
#include <stack>
#include "book.hpp"

using namespace std;

void print_stack(stack<book> q)
{
    while (!q.empty())
    {
        q.top().print_info();
        q.pop();
    }
    cout << endl;
}

int main()
{
    stack<book> stack_of_books;

    stack_of_books.push(a_book1);
    stack_of_books.push(a_book2);
    stack_of_books.push(a_book3);
    stack_of_books.push(a_book4);

    print_stack(stack_of_books);

    return 0;
}