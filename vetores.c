#include <stdio.h>
void exibir_valor(float vetor[], int n){
    for (int i = 0; i < n ; i++){
        int valor = vetor[i];
        printf("O indice do valor e: %d\nO valor do vetor e:%d\n\n", i, valor);

    }
}
int main(){
    int quantidade;
    printf("Digite quantidade de notas que gostaria: ");
    scanf("%d", &quantidade);
    float notas[400];
    float soma = 0;

    for(int i =0; i<quantidade; i++ ){
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    float media = soma / quantidade;
    exibir_valor(notas, quantidade);
    printf("Essa e a sua media: %f\n", media);






    return 0;
}