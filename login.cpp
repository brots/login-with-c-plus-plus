#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    string login;
    int senha;
    cout << "Painel Administrativo \n Digite seu login:" << endl;
    cin >> login;
    cout << "Digite sua senha:";
    cin >> senha;
    if((login == "admin" || login == "ADMIN") && senha == 1234)
       cout << "Autenticado!" << endl;
    else
       cout << "Dados incorretos, tente novamente!" << endl;
    system("PAUSE");
    return 0;
}
