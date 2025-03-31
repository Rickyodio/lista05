#include <stdio.h>
//busca linear
//ex 3

void buscaLinear(int vetor[], int tamanho, int valor) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            soma++;
            }
        }
        
    if(soma >= 2){
        printf("Aparece MAIS de uma vez! (Verdadeiro)");
    }else if(soma == 1){
        printf("Aparece UMA vez! (Falso)");
    }else{
        printf("Esse numero nao aparece na lista.");
    }
}

int main() {
    
    int lista[6] = {10, 12, 14, 12, 18, 18};
    buscaLinear(lista, 6, 10);
    
    
    return 0;
}
