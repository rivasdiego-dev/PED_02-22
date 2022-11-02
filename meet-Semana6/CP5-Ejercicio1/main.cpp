#include <iostream>
#include "list.hpp"

using namespace std;

int main()
{
    Node *booksList;
    __init__list(&booksList);

    T book1 = {"Titulo1", 1, 123, action, "Autor1"};
    T book2 = {"Titulo2", 2, 234, drama, "Autor2"};
    T book3 = {"Titulo3", 3, 345, fiction, "Autor3"};
    T book4 = {"Titulo4", 4, 456, comedy, "Autor4"};
    T book5 = {"Titulo5", 5, 567, horror, "Autor5"};

    InsertRear(&booksList, book3);
    InsertRear(&booksList, book4);
    InsertFront(&booksList, book2);
    InsertFront(&booksList, book1);

    PrintAll(&booksList);

    InsertAfterISBN(&booksList, book5, 234);
    PrintAll(&booksList);

    EmptyList(&booksList);

    PrintAll(&booksList);
}

void __init__list(Node **l)
{
    *l = NULL;
    return;
}

bool Empty(Node **l)
{
    return (*l == NULL) ? true : false;
}

void InsertFront(Node **l, T data)
{
    Node *p__node = new struct node;
    p__node->element = data;

    p__node->next = *l;

    *l = p__node;

    return;
}

void InsertAfterISBN(Node **l, T data, int ISBN)
{

    Node *p__node = new struct node;
    p__node->element = data;

    Node *temp_pointer1 = *l;

    while ((temp_pointer1->element).ISBN != ISBN)
    {
        temp_pointer1 = temp_pointer1->next;
    }

    p__node->next = temp_pointer1->next;

    temp_pointer1->next = p__node;

    return;
}

void InsertRear(Node **l, T data)
{
    Node *p__node = new struct node;
    p__node->element = data;

    if (*l == NULL)
    {
        *l = p__node;
    }
    else
    {
        Node *temp_pointer1 = *l;
        Node *temp_pointer2 = NULL;

        while (temp_pointer1 != NULL)
        {
            temp_pointer2 = temp_pointer1;
            temp_pointer1 = temp_pointer1->next;
        }

        temp_pointer2->next = p__node;
    }
}

T CreateElement()
{
    T p__element;
    bool genreSelected = false;
    int genreOption = 0;

    cout << "Ingrese el titulo del nuevo libro: ";
    getline(cin, p__element.title);

    cout << "Ingrese el estante al que pertenece el nuevo libro: ";
    cin >> p__element.shelf;

    cout << "Ingrese el numero ISBN del nuevo libro: ";
    cin >> p__element.ISBN;

    cout << "Ingrese el genero del nuevo libro:\n";
    do
    {
        cout << "\t1- Accion\n\t2- Comedia\n\t3- Ficcion\n";
        cout << "\t4- Drama\n\t5- Horror\nGenero: ";
        cin >> genreOption;
        switch (genreOption)
        {
        case 1:
            p__element.genre = action;
            genreSelected = true;
            break;
        case 2:
            p__element.genre = comedy;
            genreSelected = true;
            break;
        case 3:
            p__element.genre = fiction;
            genreSelected = true;
            break;
        case 4:
            p__element.genre = drama;
            genreSelected = true;
            break;
        case 5:
            p__element.genre = horror;
            genreSelected = true;
            break;
        default:
            cout << "La opcion seleccionada no es valida. Vuelve a intentarlo.\n";
            genreSelected = false;
            break;
        }

    } while (!genreSelected);

    cout << "Ingrese el autor del nuevo libro: ";
    cin.ignore();
    getline(cin, p__element.author);

    return p__element;
}

string GetGenre(T e)
{
    switch (e.genre)
    {
    case action:
        return "Accion";
    case comedy:
        return "Comedia";
    case fiction:
        return "Ficcion";
    case drama:
        return "Drama";
    case horror:
        return "Horror";
    default:
        return "";
    }
}

void PrintAll(Node **l)
{
    if (*l == NULL)
    {
        cout << "\nLista vacia...";
        return;
    }

    Node *temp_pointer = new Node();
    temp_pointer = *l;

    cout << "\n--------------------------------------------";
    PrintBook(temp_pointer->element);
    cout << "\n--------------------------------------------";
    while (temp_pointer->next != NULL)
    {
        temp_pointer = temp_pointer->next;
        PrintBook(temp_pointer->element);
        cout << "\n--------------------------------------------";
    };
    return;
}

void PrintBook(T e)
{
    cout << "\nTitulo: " << e.title;
    cout << "\nAutor: " << e.author;
    cout << "\nGenero: " << GetGenre(e);
    cout << "\nEstante: " << e.shelf;
    cout << "\nISBN: " << e.ISBN;

    return;
}

void EmptyList(Node **l)
{
    Node *temp_pointer_current = *l;
    Node *temp_pointer_next = NULL;

    while (temp_pointer_current != NULL)
    {
        temp_pointer_next = temp_pointer_current->next;
        delete (temp_pointer_current);
        temp_pointer_current = temp_pointer_next;
    }
    *l = NULL;

    return;
}