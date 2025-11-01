/*Leia quatro valores inteiros A, B, C e D. 
A seguir, calcule e mostre a diferença do produto
de A e B pelo produto de C e D segundo 
a fórmula: DIFERENCA = (A * B - C * D).*/

#include <iostream>
using namespace std;

int diferenca(int,int,int,int);

int main(){
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    cout << "DIFERENCA = " << diferenca(A,B,C,D) << endl ;
    return 0;
}

int diferenca(int a, int b, int c, int d){
    
    return ((a * b) - (c * d));
}