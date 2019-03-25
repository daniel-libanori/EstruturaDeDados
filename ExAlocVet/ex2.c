#include <stdio.h>
#include <stdlib.h>

int negativos (int n, float *vet){
    
    acumula=0;

    for(int i=0;i<n-1;i++)
        if(vet[i]<0)
            acumula++;

    return acumula;



}

void lerVetorDin(int n, float *vet){

    printf("\n");
    for(int i=0;i<n-1;i++){
        printf("n%d: ");
        scanf("%f", &vet[i]);
    }


}


void main(){

    int n;
    float *vetor;
    int numNegativos=0;
    

    printf("Digite um tamanho n para o vetor: ");
    scanf("%d", &n);
    
    lerVetorDin(n,vetor);
    
    numNegativos = negativos(n,vetor);

    printf("Numero de Negativos: %d", numNegativos);




}
