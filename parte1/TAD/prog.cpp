#include <iostream>
#include "ponto.h"
using namespace std;

int main(){

    int px = 14;
    int py = 91;

    Ponto* ponto1 = new Ponto();
    ponto1->cria_ponto(px, py);

    int a, b;
    ponto1->imprime_ponto(a, b);
    delete ponto1;

    return 0;

};