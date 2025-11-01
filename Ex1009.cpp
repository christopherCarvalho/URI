/*Neste problema, deve-se ler o código de uma peça 1,
 o número de peças 1, o valor unitário de cada peça 1, 
 o código de uma peça 2, o número de peças 2 e o valor unitário
 de cada peça 2. Após, calcule e mostre o valor a ser pago.*/

 #include <iostream>
 #include <iomanip>
 using namespace std;

 float calculoPecas(int, float);

 int main(){

    int codigoPeca, quantidadePecas;
    float valorUnitario, valorTotal;

    for (int i = 0; i < 2; i++)
    {       
       cin >> codigoPeca >> quantidadePecas >> valorUnitario;
       valorTotal += calculoPecas(quantidadePecas, valorUnitario);
    }

    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << valorTotal << endl;
    

    return 0;
 }

 float calculoPecas (int quantidadePecas, float valorUnitarioPecas){

    return quantidadePecas * valorUnitarioPecas;
 }