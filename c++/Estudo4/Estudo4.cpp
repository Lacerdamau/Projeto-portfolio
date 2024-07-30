#include <iostream>

using namespace std;

/*
class propaganda {
    private:
    int numero1;
    float numero2, numero3;

    public:
    
    propaganda(int a = 0, float f = 0, float f1 = 0) {
        numero1 = a;
        numero2 = f;
        numero3 = f1;
    };


    void teste() {
        cout << "Teste de classe" << endl;
    }

    void setNumero(int numero1) {
        //numero1 = a;
        this->numero1 = numero1;
    }

    int getNumero()
    {
        return numero1;
    }
};
*/

class propaganda {
private:
    int numero1;
    float numero2, numero3;

public:

    propaganda(int a, float f, float f1);

    void teste();

    void setNumero(int numero1);

    int getNumero();
    
};


int main()
{
    propaganda teste(2, 3, 4);

    //teste.setNumero(1);

    cout << teste.getNumero() << endl;

    return 0;
}



propaganda::propaganda(int a = 0, float f = 0, float f1 = 0) {
    numero1 = a;
    numero2 = f;
    numero3 = f1;
};

void propaganda::teste() {
    cout << "Teste de classe" << endl;
}

void propaganda::setNumero(int numero1) {
    //numero1 = a;
    this->numero1 = numero1;
}

int propaganda::getNumero()
{
    return numero1;
}