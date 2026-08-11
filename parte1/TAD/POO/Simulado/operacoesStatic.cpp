#include <iostream>
using namespace std;

class Operacoes {
private:
    int a;
    int b;

public:
    // Construtor com parâmetros
    Operacoes(int op1, int op2) {
        a = op1;
        b = op2;
    }

    // Construtor sem Parametros
    Operacoes(){
        a = 3;
        b = 3;
    }

    void Soma() {
        int resultado = a + b;
        cout << "A Soma de " << a << " + " << b << " eh: " << resultado << endl;
    }

    void Multiplica(){
        int resultado = a * b;
        cout << "A Multiplicacao de " << a << " X " << b << " eh: " << resultado << endl;
    }
};

int main() {

    // Chamando construtor com Parametro
    Operacoes operacoes(10, 30);
    operacoes.Soma();
    operacoes.Multiplica();


    // Chamando construtor sem parametro
    Operacoes operacao1;
    operacao1.Soma();
    operacao1.Multiplica();

    return 0;
}