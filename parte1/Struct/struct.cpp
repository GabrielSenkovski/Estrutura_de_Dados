#include <iostream>
#include <string>
using namespace std;

// struct
struct Pessoa
{
    string nome;
    int idade;
    float pi = 3.14159;

    void ApresenteSe (){
        cout << "A pessoa se chama: " <<  nome << " \nE tem: " << idade << " anos" ;
    };

    void ImprimePI(){
        cout << "O PI eh: " << pi;
    };
};

int main(){
    Pessoa pessoa1 = {"Joao", 14};
    Pessoa pi;

    pessoa1.ApresenteSe();
    // pessoa1.ImprimePI();
    
    pi.ImprimePI();
    
    return 0;
}
    