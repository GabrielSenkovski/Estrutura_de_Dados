#include "ponto.h"
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;


void Ponto::cria_ponto(int Px, int Py){
    x = Px;
    y = Py;
    };        

void Ponto::imprime_ponto(int Px, int Py){
    Px = x;
    Py = y;
    cout << "cordenadas (x,y) = " << Px << " , " << Py;
    }
