#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Digite dois numeros:" << endl;
    cin >> a >> b;


    while (a != b){
        if (a > b){
        cout << "DECRESCENTE" << endl;
        }
        else {
        cout << "CRESCENTE" << endl;
        }
        cout << "Digite outros dois numeros:" << endl;
        cin >> a >> b;
    }

    return 0;
}
