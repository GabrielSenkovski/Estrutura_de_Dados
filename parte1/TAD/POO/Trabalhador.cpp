#include <iostream>
#include <string>
#include "Trabalhador.h"
using namespace std;


string Trabalhador::GetNome(){
    return Nome;
}
void Trabalhador::SetNome(string nome){
    Nome = nome;
}
string Trabalhador::GetOrganizacao(){
    return Organizacao;
}
void Trabalhador::SetOrganizacao(string organizacao){
    Organizacao = organizacao;
}
int Trabalhador::GetIdade(){
    return Idade;
}
void Trabalhador::SetIdade(int idade){
    Idade = idade;
}

void Trabalhador::ApresenteSe(){
    cout << "Nome: " << Nome << "\t";
    cout << "Idade:" << Idade << "\t";
    cout << "Organizacao:" << Organizacao << "\n";
    }

Trabalhador::Trabalhador(){
    Nome = "Sem nome";
    Idade = -1;
    Organizacao = "sem ORG";
    };

    
Trabalhador::Trabalhador(string nome, int idade, string organizacao){
    Nome = nome;
    Idade = idade;
    Organizacao = organizacao;
}
