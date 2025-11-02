/*
Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor
de seu raio (R).
A fórmula para calcular o volume é: (4/3) * pi * R3. 
Considere (atribua) para pi o valor 3.14159.

Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), 
pois algumas linguagens (dentre elas o C++),
assumem que o resultado da divisão entre dois inteiros é outro inteiro.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.14159
using namespace std;

double volumeEsfera(float);

int main(){

    float raioEsfera;
    cin >> raioEsfera;

    cout << fixed << setprecision(3) << "VOLUME = " << volumeEsfera(raioEsfera) << endl;

    return 0;
}

double volumeEsfera(float raio){
    
    return (4.0/3.0) * PI * pow(raio,3); 
}