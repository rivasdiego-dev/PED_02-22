#include <iostream>

using namespace std;

struct employee {
	string name;
    string job;
	int age;
    double salary;
};
typedef struct employee Employee;

void PrintEmployee(employee *pointer);
void ModifyEmployee(employee *pointer, employee employee, int option);

int main () {

    Employee E04612;
    Employee E04622;
    Employee E04632;
    Employee *pointer_to_employee;

    E04612.age = 34; 
    E04612.name = "Rolando Caceres";
    E04612.job = "IT";
    E04612.salary = 462.28;
    
    E04622.age = 34; 
    E04622.name = "Fernanda Rosa";
    E04622.job = "Sales";
    E04622.salary = 668.22;

    E04632.age = 34; 
    E04632.name = "Armando Garcia";
    E04632.job = "RRHH";
    E04632.salary = 282.81;

    return 0;
}

void PrintEmployee(employee *pointer, employee employee){

    //TODO implement function

}
void ModifyEmployee(employee *pointer, employee employee, int option){
    
    //TODO implement function
    
}