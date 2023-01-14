#include <iostream>

using namespace std;

// Different genres a book can be.
enum genres
{
    action,
    comedy,
    fiction,
    drama,
    horror
};


/// @param title Title of the book
/// @param shelf Shelf in which the book is located
/// @param ISBN ISBN (International Standard Book Number) of the book
/// @param genre Genre of the book
/// @param author Author(s) of the book
struct book
{
    /// @brief Title of the book
    string title;
    /// @brief Shelf in which the book is located
    int shelf;
    /// @brief ISBN (International Standard Book Number) of the book
    int ISBN;
    /// @brief Genre of the book
    genres genre;
    /// @brief Author(s) of the book
    string author;
};

/// @param title Title of the book
/// @param shelf Shelf in which the book is located
/// @param ISBN ISBN (International Standard Book Number) of the book
/// @param genre Genre of the book
/// @param author Author(s) of the book
typedef struct book T;

struct node
{
    // Element T inside the node. In this case is a struct book.
    T element;
    // Pointer to another node
    struct node *next = NULL;
};
typedef struct node Node;

// --- LIST FUNCTIONS ---


/// @brief Function to initialize a pointer to use as a list
/// @param l Pointer using as a list
void __init__list(Node **l);

/// @brief Function to know if a list is empty
/// @param l  Pointer using as a list
/// @return True if it's empty. False if not. 
bool Empty(Node **l);


/// @brief Adds an element to the beggining of the list
/// @param l Pointer using as a list
/// @param data Element that is going to be insterted
void InsertFront(Node **l, T data);


/// @brief Instert after another element inside the list
/// @param l Pointer using as a list
/// @param data Element that is going to be insterted
/// @param ISBN ISBN of the book of wich is going to be inserted after
void InsertAfterISBN(Node **l, T data, int ISBN);

/// @brief Adds an element to the end of the list
/// @param l Pointer using as a list
/// @param data Element that is going to be insterted
void InsertRear(Node **l, T data);

/// @brief Function to delete all elementens of a list
/// @param l Pointer using as a list
void EmptyList(Node **l);


// --- MENU FUNCTIONS ---

/// @brief Prints all elements in the list
/// @param l Pointer using as a list
void PrintAll(Node **l);

// --- MISC FUNCTIONS ---

/// @brief Function to create a T element
/// @return T element
T CreateElement();

/// @brief Prints the genre of the book (T element)
/// @param e T element, in this case will be a book
/// @return A string with the book's genre
string GetGenre(T e);


/// @brief Prints all members of a struct book
/// @param e T element, in this case will be a book
void PrintBook(T e);
