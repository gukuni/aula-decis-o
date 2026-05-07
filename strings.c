#include <string.h>
#include <stdio.h>

int main(){
    char nome[20];

    printf("Digite o seu nome completo: ");
    fgets(nome, 20, stdin); //igual ao scanf
    int tamanho_antes = strlen(nome); //tamanho inicial da string
    nome [strcspn(nome, "\n")] = '\0'; 
    int tamanho_depois = strlen(nome); /// Tamanho final após strcspn da string 
    printf("Tamanho do nome antes da funcao strcspn: %d\n", tamanho_antes);
    printf("Tamanho do nome depois da funcao strcspn: %d\n", tamanho_depois);
    printf("Ola, %s\n", nome);
    //Utilizando ao cópia limitada da string 

    char nome_2[5];
    strcpy(nome_2, nome);
    nome_2[strcspn(nome, "\n")] = '\0';

    printf("Como posso te ajudar, %s\n", nome_2);

    //adição de mensagem
    char msg[21] = "O que voce gostaria?";
    //printf("%s. %s", nome_2, msg);
    puts(nome_2);
    puts(msg);
    

    //comparacao entre strings
    char nome_3[20];
    int comp;
    printf("Digite seu nome: \n");
    scanf("%s", nome_3);
    comp = strcmp(nome_2, nome_3);
    printf("A comparacao e: %d", comp);



    return 0;
}
