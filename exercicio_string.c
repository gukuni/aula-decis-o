#include <stdio.h>
#include <string.h>

int main(){
    char user_name [50];
    printf("Digite seu nome: \n");
    fgets(user_name,20,stdin);

    int tamanho;
    printf("%d\n", strlen(user_name));
    printf("%d", strlen("admin"));
    printf("%d", ((user_name == "admin")==0));
    if (user_name == "admin" ){
        printf("Acesso liberado! ");

    }else {
        printf("Acesso negado!");
    }



    return 0;
}