#include <iostream>
#include <string>
#include "Trabalhador.h"
using namespace std;

int main(){   
    Trabalhador t1;
    Trabalhador t2("Pedro", 34, "aa");
    Trabalhador *t3 = new Trabalhador("Joao", 44, "Unioeste");
    t1.ApresenteSe();
    t1.SetNome("Gabriel");
    t1.ApresenteSe();
    t2.ApresenteSe();
    t3->ApresenteSe();
    delete t3;
    return 0;
};