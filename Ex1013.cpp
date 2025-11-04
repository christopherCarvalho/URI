/*
Calcule o consumo médio de um automóvel 
sendo fornecidos a distância total percorrida (em Km) 
e o total de combustível gasto (em litros).
*/

#include <iostream>
#include <iomanip>
using namespace std;

float consumoMedio(int, float);

int main(){
    int X;
    float Y;

    cin >> X >> Y;

    cout << fixed << setprecision(3) <<consumoMedio(X,Y) << " km/l" << endl;
    return 0;
}

float consumoMedio(int kilometros, float litros){

    return kilometros/litros;
}


