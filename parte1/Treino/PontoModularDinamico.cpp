#include <iostream>
using namespace std;

class Ponto
{
    private:
    //atributos do ponto
        int x;
        int y;

    public:
    //metodos do ponto
        void cria_ponto(int Px, int Py);
        void imprime_ponto(int Px, int Py);

};

void Ponto::cria_ponto(int Px, int Py){
    x = Px;
    y = Py;
    };        

void Ponto::imprime_ponto(int Px, int Py){
    Px = x;
    Py = y;
    cout << "cordenadas (x,y) = " << Px << " , " << Py; 
    }

int main(){

    int px = 14;
    int py = 91;

    Ponto* ponto1 = new Ponto();
    ponto1->cria_ponto(px, py);

    int a, b;
    ponto1->imprime_ponto(a, b);

    return 0;

};