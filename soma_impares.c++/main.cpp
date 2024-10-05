#include <iostream>

using namespace std;

int main()
{
    int a, b, troca, soma;

    cout << "Digite dois numeros:" << endl;
    cin >> a >> b;

    if (a > b){
        troca = a;
        a = b;
        b = troca;
    }

    soma = 0;
    for(int i = a+1 ; i < b; i++) {
        if (i % 2 != 0){
            soma += i;
        }
    }

    cout << "SOMA DOS IMPARES = " << soma << endl;




    return 0;



}
