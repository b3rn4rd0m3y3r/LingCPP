#include <iostream>
#include <locale.h>
#include <Windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

	SetConsoleOutputCP(CP_UTF8);
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    cout << "Você digitou " << numero;    
    return 0;
}
