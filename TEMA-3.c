#include <stdio.h>

// Exercicio Movimentação de Peças de Xadrez


//loop TORRE
void torre (int casas){
    if (casas > 0) {
        printf(" *** Torre ***\n");
        printf("DIREITA\n");
        printf("\n");
        torre(casas - 1);
    } }

    //loop BISPO
    void recursive  (int casas){
    if (casas > 0) {
            printf(" *** BISPO ***\n");
            printf("CIMA,DIREITA\n");
             printf("Vertical,Horinzontal\n");
            printf("\n");
            recursive(casas - 1); // chamada recursiva
        }}

    //loop RAINHA
    void rainha (int casas){   
    if (casas > 0) {
        printf(" *** RAINHA ***\n");
        printf("CIMA,DIREITA\n");
        printf("\n");
        rainha(casas - 1);
    } }
    
int main(){
   
     torre (5);
     recursive (5) ; //bispo
     rainha (8);
   
for (int i = 0; i < 2; i++ )
{   if (i==0) continue;
    printf(" *** CAVALO ***\n");
    printf("CIMA\n");
    printf("CIMA\n");
    printf("DIREITA\n");
}

 
 return 0;
}