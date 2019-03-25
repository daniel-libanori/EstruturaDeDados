#include <stdio.h>
#include <stdlib.h>



int dentro_ret (int x0, int y0, int x1, int y1, int x, int y){

    if(x>=x0 && x<=x1 && y>=0 && y<=y1)
        return 1;
    else
        return 0;








}

int main(){

    int x,y,x0,y0,x1,y1;
    int confirmaPosicoes=0;
    int retorno;

        while(confirmaPosicoes==0){
        printf("Digite as Coordenadas do Vertice Inferior Esquerdo:\nX0: ");
        scanf("%d",&x0);
        printf("Y0: ");
        scanf("%d", &y0);

        printf("Digite as Coordenadas do Vertice Superior Direito:\nX1: ");
        scanf("%d",&x1);
        printf("Y1: ");
        scanf("%d", &y1);

        if(x0<x1 && y0<y1)
            confirmaPosicoes=1;
    }

    printf("Digite as Coordenadas do Ponto Comparado:\nX: ");
    scanf("%d",&x);
    printf("Y: ");
    scanf("%d", &y);


    retorno = dentro_ret(x0,y0,x1,y1,x,y);

    return retorno;




}
