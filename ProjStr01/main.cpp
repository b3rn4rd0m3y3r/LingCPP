#include <iostream>
#include <string>		// Necessário para usar strings
#include <Windows.h>
using namespace std;

int main()
{
	// Garante a acentuação na saída da console
	SetConsoleOutputCP(CP_UTF8);
	string nome1("Banana");		// Definição e inicialização
	string nome2("Laranja");	// Definição e inicialização
	string nome3, nome4;		// Não inicializa nome3 nem nome4

	cout << "Os dois primeiros nomes são " << nome1 << " e " << nome2 << endl;
	nome3 = "Acerola";		// Inicialização posterior de nome3
	nome4 = nome3;
	cout << "As frutas 3 e 4 " << nome3 << " e " << nome4 << endl;
}