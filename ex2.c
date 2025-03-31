#include <stdio.h>
//busca binaria
//ex2

int buscaBinaria(int vetor[], int tamanho, int valor) {
    int inicio = 0;
    int fim = tamanho - 1;
    
    while (inicio <= fim) {
        
        int meio = (inicio + fim) / 2;
        
        if (vetor[meio] == valor) {
            return meio; 
            } else if (vetor[meio] < valor) {
                inicio = meio + 1; 
            } else {
                fim = meio - 1; 
            }
        }
    return -1; 
}

int main() {
    
    int matricula[6] = {101, 102, 103, 104, 105, 106};
    
    int resultado = buscaBinaria(matricula, 6, 103);
    printf("%d",resultado);
    
    return 0;
}
