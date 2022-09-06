#include <iostream>

using namespace std;

struct employee {
	string name;
    string job;
	int age;
    double salary;
};
typedef struct employee Employee;

void PrintEmployee(employee employee);

int main () {

    Employee E04612;
    Employee E04622;
    Employee E04632;
    Employee *pointer_to_employee;

    E04612.age = 11; 
    E04612.name = "Jesus Caceres";
    E04612.job = "IT";
    E04612.salary = 46228;
    
    E04622.age = 34; 
    E04622.name = "Fernanda Rosa";
    E04622.job = "Sales";
    E04622.salary = 668.22;

    E04632.age = 28; 
    E04632.name = "Armando Garcia";
    E04632.job = "RRHH";
    E04632.salary = 282.81;

    PrintEmployee(E04612);
    PrintEmployee(E04622);
    PrintEmployee(E04632);

    pointer_to_employee = &E04612;
    pointer_to_employee -> age = 21;
    (*pointer_to_employee).salary = 462.28;
    PrintEmployee(E04612);

    return 0;
}

void PrintEmployee(employee employee){

    Employee *pEmployee = &employee;
    cout << "Informacion del empleado:\n";
    cout << "\tNombre: " << pEmployee -> name << "\n";
    cout << "\tEdad: " << pEmployee -> age << "\n";
    cout << "\tDepartamento: " << (*pEmployee).job << "\n";
    cout << "\tSalario: " << (*pEmployee).salary << "\n\n";

}