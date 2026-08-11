#include <iostream>
#include <vector>
#include <stack>
using namespace std;


const int MAXPILHA = 5;

class Pilha {
private:
    int _dados[MAXPILHA]; // vetor estático
    int _topo;            // indicador do topo

public:
    // Método construtor da pilha
    Pilha() {
        _topo = -1;       // inicia vazia
    }

    void empilha(int dado){
        if (_topo == MAXPILHA -1 )
        {
            throw "Erro: Pilha está cheia";
        }
        _topo++;
        _dados[_topo] = dado;
    }

    int desempilha(){
        if (_topo == -1)
        {
            throw "Erro: Pilha está vazia";
        }
        
        //Salvando valor removido para return
        int valorRemovido = _dados[_topo];
        //Remove o item do topo na pilha
        _topo--;
        return valorRemovido;
    }

    int topo(){
        if (_topo == -1)
        {
            throw "Erro: Pilha está vazia";
        }
        //Imprime Topo
        return _dados[_topo];
    }

    void imprimirPilha(){
        if (_topo == -1){
            cout << "A pilha esta vazia";
            return;
        }
        
        for (int i = _topo; i >= 0; i--)
        {
            cout << "A pilha no indice " << i << " tem o valor: " << _dados[i] << "\n";
        }
        cout << "Portanto o Topo da Pilha final tem o valor: " <<  _dados[_topo];
    }
};



int main(){
    Pilha pilha_1;
    while (1)
    {


        // Escolher operacao
        int operacao = 0;
        cout << "Escolha uma Operacao: 1 - Empilha, 2 Desempilha, 3 - Imprime topo, 0 Exit e (imprime pilha inteira): ";
        cin >> operacao;
        
        try {
            // Empilhar Valor
            if (operacao == 1)
            {
                int valor;
                cout << "Insira um Valor na pilha: ";
                cin >> valor;
                pilha_1.empilha(valor);
                cout << "Dado " << valor << " inserido com sucesso.\n";
            }
            
            // Desempilhar valor
            if (operacao == 2){
                cout << "O Valor removido do topo foi: " << pilha_1.desempilha() << " \n";  
            }

            // Imprimir Topo
            if (operacao == 3)
            {
                cout << "O Topo da pilha contem o valor:  " << pilha_1.topo() <<" .\n";
            }
            

            if (operacao == 0){
                pilha_1.imprimirPilha();
                
                // Condição de Parada
                break;
            }        
        }
        catch (const char* msg){
            cout << "\n[ALERTA] " << msg << "\n\n";
        }
    }
    
    return 0;
};