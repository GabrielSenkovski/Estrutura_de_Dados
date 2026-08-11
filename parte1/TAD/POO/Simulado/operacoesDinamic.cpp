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

    void setA(int op1){a = op1;}
    void setB(int op2){b = op2;}
};

class Mul : public Operacoes{
    public: 
    Mul(int op1, int op2) : Operacoes (op1, op2){}

    void MulSomando(){
        int resultado = 0;
        for (int i = 0; i < getB(); i++)
        {
            resultado = resultado + getA();
        }
        cout << "\n" <<  resultado;
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


    Mul* mulsoma = new Mul(20, 3);
    mulsoma->MulSomando();

    
    delete operacoes;
    delete operacao1;
    delete mulsoma;

    return 0;
}