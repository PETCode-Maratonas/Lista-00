#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int i, movimentos = 0, repeticoes = 0, aux = 0;
    char palavra[50];

    // Recebe a quantidade de repetições
    scanf("%d", &repeticoes);

    // Enquanto houver repetições
    while(repeticoes--){

        // Recebe a palavra e a quantidade de movimentos
        scanf("%s", palavra);
        scanf("%d", &movimentos);

        // Enquanto a palavra não acabar
        for (i = 0; i < 50; i++){
            // Verifica se a palavra acabou
            if (palavra[i] == '\0')     
                break;

            // Verifica se a letra está fora do alfabeto
            if ((palavra[i] - movimentos) < 65)
                aux = (palavra[i] - movimentos) + 26;

            // Caso ela esteja dentro do alfabeto
            else
                aux = palavra[i] - movimentos;
        printf("%c", aux);
        }

        printf("\n");
    }
    
    return 0;
}