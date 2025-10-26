#include <iostream>
#include <iomanip>      // biblioteca de formatacao para casas decimais
using namespace std;

int main () {
    double n = 3.14159;
    double raio, area;

    cin >> raio;

    area = n * (raio * raio);

    cout << "A=" << fixed << setprecision(4) <<area << endl; //fixed → força o formato decimal fixo (não científico, tipo 3.14 em vez de 3.14e+00).

                                                            //setprecision(4) → define 4 casas após o ponto.
    
    return 0;
}