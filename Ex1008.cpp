/*
Escreva um programa que leia o número de um funcionário,
seu número de horas trabalhadas,
o valor que recebe por hora e calcula o salário desse funcionário.
A seguir, mostre o número e o salário do funcionário, com duas casas decimais.
*/

#include <iostream>
#include <iomanip>
using namespace std;

double payPerHour(int, double);

int main(){
    
    int id, hours;
    double pricePerHour;

    cin >> id >> hours >> pricePerHour;

    cout << fixed << setprecision(2) 
         << "NUMBER = "<< id << endl 
         << "SALARY = U$ "<< payPerHour(hours, pricePerHour)
         << endl;

    return 0;
}

double payPerHour(int hours, double price){

    return hours * price;
}