#include <iostream>

using namespace std;

void digite()
{
    int numero = 0;

    cout << "Digite um numero:" << endl;

    cin >> numero;

    cout << "Numero digitado: " << numero << endl;

}

int soma(int x, int y)
{
    int soma;

    soma = x + y;

    return soma;
}


int main()
{
    int numero1 = 0;
    int numero2 = 0;

    /*Print C / C++
    printf("Insira dados:\n");
    scanf_s("%d", &numero);

    printf("\nNumero digitado: %d", numero); */

    //Print C++
    cout << "Hello World!\n";

    /*
    cout << "Digite um numero:" << endl; // pula linha

    cin >> numero;

    cout << "Numero digitado: " << numero << endl; // mostrar valor digitado */

    //digite();

    cout << "Digite um numero:" << endl;
    cin >> numero1;

    cout << "Digite outro numero:" << endl;
    cin >> numero2;

    int s = soma(numero1, numero2);

    cout << "Resultado da soma e: " << s << endl;

    return 0;
}


