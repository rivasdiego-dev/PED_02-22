#include <iostream>

using namespace std;

class dog{
    private:
        string name;

    public:
        void greet() {
            cout << "*guau-guau*" << "\n";
        }
        void eat(string food) {
            cout << name << " comio " << food << "\n";
        }
        void move(int distance) {
            cout<< "\n" << name << " camino "<< distance << "m";
        }
        dog(string Name)
        {
            name = Name;
        }
};

class cat{
    private:
        string name;

    public:
        void greet() {
            cout << "*miau*" << "\n";
        }
        void eat(string food) {
            cout << name << " comio " << food << "\n";
        }
        void move(int distance) {
            cout<< "\n" << name << " camino por los techos "<< distance << "m";
        }
        cat(string Name)
        {
            name = Name;
        }
};

class fish{
    private:
        string name;

    public:
        void greet() {
            cout << "*glu-glu*" << "\n";
        }
        void eat(string food) {
            cout << name << " comio " << food << "\n";
        }
        void move(int distance) {
            cout<< "\n" << name << " nado "<< distance << "m";
        }
        fish(string Name)
        {
            name = Name;
        }
};

class parrot{
    private:
        string name;

    public:
        void greet() {
            cout << "*crru-crru*" << "\n";
        }
        void eat(string food) {
            cout << name << " comio " << food << "\n";
        }
        void move(int distance) {
            cout<< "\n" << name << " volo "<< distance << "m";
        }
        parrot(string Name)
        {
            name = Name;
        }
};

class human{
    private:
        string name;

    public:
        void greet() {
            cout << "Hola! Mi nombre es " << name << "\n";
        }
        void eat(string food) {
            cout << name << " comio " <<  food << "\n";
        }
        void move(int distance) {
            cout<< "\n" << name << " se subio a su carro y manejo "<< distance << "m";
        }
        human(string Name)
        {
            name = Name;
        }
};
