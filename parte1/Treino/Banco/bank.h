#ifndef CONTA_H
#define CONTA_H

/* estrutura dos dados*/
struct Bank {
    int numero;
    std::string titular; /*recebe a str de titular de forma dinamica de acordo com o tamanho da str*/
    double saldo;
};

/*funções (metodos)*/
Bank criar_conta(std::string nome, int numero);
double consultar_saldo(const Bank& conta); /*const proibe a alteracao do saldo*/
bool depositar(Bank& conta, double valor);
bool sacar(Bank&, double valor); 

