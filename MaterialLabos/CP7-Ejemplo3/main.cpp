#include <iostream>
#include "classes.hpp"

using namespace std;

int main (){
    dog a_dog = dog("Chuchi");
    cat a_cat = cat("Misifus");
    fish a_fish = fish("Megalodon");
    parrot a_parrot = parrot("Chayanne");
    human a_human = human("Wilber");

    cout << "Saludo de un perro: "; a_dog.greet();
    cout << "Saludo de un gato: "; a_cat.greet();
    cout << "Saludo de un pez: "; a_fish.greet();
    cout << "Saludo de un loro: "; a_parrot.greet();
    cout << "Saludo de un humano: "; a_human.greet();

    cout << "\nComidas:\n";
    a_dog.eat("Pedigree");
    a_cat.eat("Whiskas");
    a_fish.eat("Goldfish Flakes");
    a_parrot.eat("una galleta");
    a_human.eat("un BigMac");

    cout << "\nMovimiento:\n";
    a_dog.move(300);
    a_cat.move(40);
    a_fish.move(1);
    a_parrot.move(5);
    a_human.move(5000);

}