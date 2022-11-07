#include <iostream>

using namespace std;

class dog
{
private:
    string name;

public:
    void greet() {
        cout << "Guau-guau";
    }
    void eat(string food) {
        cout << name << "comio " << food;
    }
    void move(int distance) {
        cout << name << " camino "<< distance << "m";
    }
    dog(string Name)
    {
        name = Name;
    }
};
class cat
{
private:
    string name;

public:
    void greet() {
        cout << "Miau";
    }
    void eat(string food) {
        cout << name << "comio " << food;
    }
    void move(int distance) {
        cout << name << " camino por los techos "<< distance << "m";
    }
    cat(string Name)
    {
        name = Name;
    }
};
class fish
{
private:
    string name;

public:
    void greet() {
        cout << "glu-glu";
    }
    void eat(string food) {
        cout << name << "comio " << food;
    }
    void move(int distance) {
        cout << name << " nado "<< distance << "m";
    }
    fish(string Name)
    {
        name = Name;
    }
};
class parrot
{
private:
    string name;

public:
    void greet() {
        cout << "crru-crru";
    }
    void eat(string food) {
        cout << name << "comio " << food;
    }
    void move(int distance) {
        cout << name << " se movio "<< distance << "m";
    }
    parrot(string Name)
    {
        name = Name;
    }
};
class human
{
private:
    string name;

public:
    void greet() {
        cout << "Hola! Mi nombre es" << name;
    }
    void eat(string food) {
        cout << name << "se sirvio " << food;
    }
    void move(int distance) {
        cout << name << " se subio a su carro y manejo "<< distance << "m";
    }
    human(string Name)
    {
        name = Name;
    }
};