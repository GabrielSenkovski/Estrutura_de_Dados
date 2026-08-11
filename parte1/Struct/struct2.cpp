#include <iostream>
#include <string>
using namespace std;


struct Pessoa{
    string nome;
    int idade;
    float altura;
};

int main(){
    
    Pessoa* p1 = new Pessoa;

    p1->nome = "Joao";
    p1->idade = 25;
    p1->altura = 1.88;

    cout << p1->nome << p1->idade << p1->altura;
    return 0;
};