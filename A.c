#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a, b, c;                          // Numero de funcionarios
    int time0, time1, time2, time3;       // Tempo total 

    // Leitura do numero de funcionarios
    scanf("%d %d %d", &a, &b, &c);

    // Calculo do tempo total
    time1 = (b * 2 + c * 4);
    time2 = (a + c) * 2;
    time3 = (a * 4 + b * 2);

    // Verificacao do menor tempo
    if(time1 <= time2 && time1 <= time3)
        time0 = time1;
    else if(time2 <= time1 && time2 <= time3)
        time0 = time2;
    else
        time0 = time3;

    // Impressao do tempo total
    printf("%d\n", time0);

    return 0;
}