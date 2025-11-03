/*
Faça um programa que leia três valores e apresente o maior
dos três valores lidos seguido da mensagem “eh o maior”.

use abs(x) como meio de ver o maior.
*/

#include <iostream>
#include <cmath>
using namespace std;

int maiorNumeroAB(int, int);
int maiorNumero(int, int);

int main(){
    int A, B, C;
    cin >> A >> B >> C;

    cout << maiorNumero(maiorNumeroAB(A,B),C)<< " eh o maior" << endl;;
    
    
    return 0;
}

int maiorNumeroAB(int a, int b){

    return (a + b + abs(a - b))/2;
}

int maiorNumero(int ab, int c){

    return (ab + c + abs(ab - c))/2;
}