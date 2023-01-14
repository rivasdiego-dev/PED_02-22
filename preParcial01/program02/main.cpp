
#include<iostream>

using namespace std;

int binario (int n);

int main() {
    int number;
    do {
        cout << "INGRESE NUMERO:";
        cin >> number;
        if(number<0) cout<<"\nINGRESE UN NUMERO ENTERO Y POSITIVO… \n";
    } while(number<0) ;

    cout<<endl;
    
    cout<<"\n Numero: "<< number;
    
    cout<<"\n Binario: ";
    binario(number);

    return 0;
}

int binario(int n){

    if(n>1) {
        binario(n/2);
    }

    cout << n%2;
}