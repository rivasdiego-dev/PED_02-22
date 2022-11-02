#include <iostream>

using namespace std;

bool impar (int num);
bool par (int num);

int main () {

    par(4) ? cout << "Es par!\n" : cout << "No es par...\n";
    impar(4) ? cout << "Es impar!\n" : cout << "No es impar...\n";

    return 0;
}


bool impar (int num){
    if (num == 0) 
        return false;
    else
        return par(num-1);
}

bool par (int num) {
    if (num == 0) 
        return true;
    else
        return impar(num-1);
}