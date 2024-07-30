#include <iostream>
#include <cstddef>

using namespace std;

int main()
{
    // Ponteiro
    /*
    int var1 = 5;

    int* ponteiro1;

    ponteiro1 = &var1;

    cout << var1 << endl;
    cout << ponteiro1 << endl; // endereço do ponteiro
    cout << *ponteiro1 << endl; // valor do endereço do ponteiro


    int var2 = *ponteiro1;

    int* ponteiro2 = NULL;
    cout << ponteiro2 << endl;
    cout << *ponteiro2 << endl;


    int* ponteiro3 = new int;
    *ponteiro3 = 35;
    */

    // Vetor

    //Alocação estatica
    /*int vetor[4] = {5, 10, 15, 20};
    int vetor1[] = { 5, 10, 15, 20 };

    int x = sizeof(vetor); // tamanho de bits do vetor;]

    int y = sizeof(vetor) / sizeof(int); // saber quantidade de elementos do vetor;

    for (int i = 0; i < y; i++)
    {
        cout << vetor[i] << endl;
    }
    */

    int tamanho;

    cout << "Digite o tamanho do vetor!" << endl;
    cin >> tamanho;

    int* vetor = new int[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        cout << "Digite o valor do elemento " << i + 1 << " do vetor" << endl;
        cin >> vetor[i];
        
    }

    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << endl;
    }
    


    return 0;
}

