#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N, cont;
    double alturaMedia, somaAltura, porcentagem;

    cout << "Quantas pessoa serao digitadas? ";
    cin >> N;

    string nome[N][50];
    int idade[N];
    double altura[N];

    for (int i = 0; i < N; i++){
        cout << "Dados da " << i+1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];
    }
    somaAltura = 0;
    for (int i = 0; i < N; i++){
        somaAltura += altura[i];
    }

    alturaMedia = somaAltura / N;
     cout << fixed << setprecision(2);
     cout << "ALTURA MEDIA = " << alturaMedia << endl;

     cont = 0;
     for (int i = 0; i < N; i++){
        if (idade[i] < 16){
            cont++;
        }
     }
     porcentagem = (cont * 100.0) / N;

     cout << fixed << setprecision(1);
     cout << "PESSOA COM MENOS DE 16 ANOS: " << porcentagem << "%" << endl;

     cout << "PESSOAS COM MENOS DE 16:" << endl;
     for (int i = 0; i < N; i++){
        if (idade[i] < 16){
            cout << nome[i] << endl;
        }
     }

    return 0;
}
