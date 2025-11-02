/*
Escreva um programa que leia três valores com ponto flutuante
de dupla precisão: A, B e C. Em seguida, calcule e mostre:

a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.

*/

/*
  setw(n) → define a largura do campo (quantos caracteres o valor ocupará).

  left e right → alinham o texto à esquerda ou à direita dentro desse campo.

  setfill(ch) → define o caractere de preenchimento (por padrão é espaço).
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.14159
using namespace std;

double triangulo(float, float);
double circulo(float);
double trapezio(float, float, float);
double quadrado(float);
double retangulo(float, float);

int main()
{

    float A, B, C;
    cin >> A >> B >> C;
    cout << fixed << setprecision(3)
         << left << setw(12) << "TRIANGULO: " << right << triangulo(A, C) << endl
         << left << setw(12) << "CIRCULO: " << right << circulo(C) << endl
         << left << setw(12) << "TRAPEZIO: " << right << trapezio(A, B, C) << endl
         << left << setw(12) << "QUADRADO: " << right << quadrado(B) << endl
         << left << setw(12) << "RETANGULO: " << right << retangulo(A, B) << endl;

    return 0;
}

double triangulo(float a, float b)
{

    return (a * b) / 2;
}

double circulo(float c)
{

    return PI * pow(c, 2);
}

double trapezio(float a, float b, float c)
{

    return ((a + b) * c) / 2;
}

double quadrado(float b)
{

    return pow(b, 2);
}

double retangulo(float a, float b)
{

    return a * b;
}
