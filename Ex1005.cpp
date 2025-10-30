/*
Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno.
 A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11).
 Assuma que cada nota pode ir de 0 até 10.0,
 sempre com uma casa decimal.
*/

#include <iostream>
#include <iomanip>
using namespace std;

double media(double a, double b);

int main(){
    double A, B;
    
    cin >> A >> B;
    
    cout << fixed << setprecision(5) << "MEDIA = " << media(A,B) << endl;
    return 0;
}

double media(double a, double b){

    return ((a * 3.5) + (b * 7.5)) /(3.5 + 7.5);

}