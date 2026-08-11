#include <iostream>
#include <vector>
#include <stack>
using namespace std;

template <typename T>

class Fila {
private:
    T* _dados;
    int _tam;
    int _fim;

public:
    Fila(int tam){
        _dados[tam]
    }


    int retira(){
        if (_fim == -1){
            
            throw "Erro: Fila está vazia";
    
        }

        int aux = _dados[0];
        for (int i = 0; i < _fim; i++)
        {
            _dados[i] = _dados[i+1];
        }
        
        fim--;
        return aux;


    }


    //retira posicao
    // arg recebe a posicao p retirada
    int retiraPosicao(int arg){
        if (_fim == -1){
            
            throw "Erro: Fila está vazia";
    
        }

        aux = _dados[arg];
        for (int i = arg; i < _fim ; i++)
        {
            _dados[i] = _dados[i+1];
        }
        fim--;
        return aux;
    }

    void InserePosicao(int arg, int dado){
        if (_fim == -1){
            
            throw "Erro: Fila está cheia";
    
        }


        _fim++;
        int deslocamento = (_fim - arg) + 1;
        for (int i = _fim; i > deslocamento; i--)
        {
            _dados[_fim-i] = _dados[(_fim-i)-1];
        }
        _dados[arg] = dado;
    }
};

int main(){

    
    // definindo tamanho do maximo do vetor 
    int n = 10;

    Fila<int> fila(n);



    return 0;
}