#include <iostream>
#include <vector>
#include <stack>
using namespace std;


const int MAX = 50;


class Lista{
    private:
        int _dados[MAX];
        int _topo = -1;
        
    public:

    //Imprimir Lista
    void imprime_lista(){
        for (int i = 0; i <= _topo ; i++)
        {
            cout << _dados[i] << "\n";
        }
    }

    //TOPO (PILHA)
    //inserir elemento TOPO
    void inserir_topo(int a){
        _topo++;
        _dados[_topo] = a;
    };

    // remove elemento TOPO
    int remover_topo(){
        int aux;
        aux = _dados[_topo];
        _topo--;
        return aux;
    };

    
    //INICIO (FILA)
    //Insere elemento INICIO
    void inserir_inicio(int a){
        _topo++;

        for(int i=_topo; i >= 0; i--){ 
            _dados[i] = _dados[i-1];
        }
        _dados[0] = a; 
    }
    //Remove elemento INICIO
    int remover_inicio(){
        int aux; 
        aux = _dados[0];

        for(int i=0; i <= _topo -1; i++){    
            _dados[i] = _dados[i+1]; 
        }
        _topo --;

        return aux;
    }


    //NO MEIO (LISTA)
    //inserir elementos no MEIO [Endereço, dado]
    void inserir_meio(int a, int b){
        _topo++;
        for (int i = _topo; i > a; i--)
        {
            _dados[i] = _dados[i-1];
        }
        _dados[a] = b;
    }


};

    

int main(){

    Lista lista1;

    cout << "A lista contem os elementos: \n";
    lista1.inserir_topo(12);
    lista1.inserir_topo(13);
    lista1.inserir_topo(14);
    lista1.inserir_inicio(1);
    lista1.inserir_meio(2,4);
    
    // Imprime Lista
    lista1.imprime_lista();
    
    //Removendo TOPO
    cout << "O elemento do topo: " << lista1.remover_topo() << " foi removido da lista. \n";
    cout << "O elemento do inicio: " << lista1.remover_inicio() << " foi removido da lista. \n";

    //
    cout << "Lista final: \n"; 
    lista1.imprime_lista();
    
    return 0;
}