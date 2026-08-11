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

    int getA(){return a;}
    int getB(){return b;}

    void setA(int arg){a = arg;}
    void setB(int arg){b = arg;}
};

class Subtracao : public Operacoes{
public:

    //construtor de subtracao
    Subtracao(int op1, int op2) : Operacoes(op1, op2){};
    
    void calcula(){
        int resultado = getA() - getB();
        cout << "A Subtracao de " << getA() << " - " << getB() << " eh: " << resultado << endl;
    }
};

int main() {

    // Chamando construtor com Parametro
    Operacoes* operacoes = new Operacoes(10,29);
    operacoes->Soma();
    operacoes->Multiplica();


    // Chamando construtor sem parametro
    Operacoes* operacao1 = new Operacoes();
    operacao1->Soma();
    operacao1->Multiplica();

    // Chamando classe subtrair com parametro
    Subtracao* subtracao1 = new Subtracao(10,5);
    subtracao1->calcula();

    delete operacoes;
    delete operacao1;
    delete subtracao1;

    return 0;
}