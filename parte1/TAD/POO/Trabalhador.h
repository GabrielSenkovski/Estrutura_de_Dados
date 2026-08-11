#include <iostream>
#include <string>
using namespace std;

class Trabalhador{
private:
    string Nome;
    int Idade;
    string Organizacao;

public:
    string GetNome();
    void SetNome(string nome);
    string GetOrganizacao();
    void SetOrganizacao(string organizacao);
    int GetIdade();
    void SetIdade(int idade);
    void ApresenteSe();
    Trabalhador();
    Trabalhador(string nome, int idade, string organizacao);
};
