#include <stdio.h>

// Exercicio 1/NOVATO - Movimentação de Peças de Xadrez


//loop TORRE
void torre (int casas){
    if (casas > 0) {
        printf(" *** Torre ***\n");
        printf("DIREITA\n");
        printf("\n");
        torre(casas - 1);
    } }

    //loop BISPO
    void bispo(int casas){
    if (casas > 0) {
        printf(" *** BISPO ***\n");
        printf("CIMA,DIREITA\n");
        printf("\n");
        bispo(casas - 1);
    } }

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
     bispo (5) ;
     rainha (8);
   
for (int i = 0; i < 2; i++ )
{   if (i==0) continue;
    //if(i<3)break;
    printf(" *** CAVALO ***\n");
    printf("CIMA\n");
    printf("CIMA\n");
    printf("DIREITA\n");
}

 
 return 0;
}