#include <stdio.h>
#include <stdlib.h>


void inverte (int n, int *vet){

    int aux=0;

    if(n%2==0)
        for(int i=0, int j=n-1; i<=n/2;i++,j--){
            aux=vet[i];
            vet[i]=vet[j];
            vet[j]=aux;
        }
    else
        for(int i=0, int j=n-1; i<=(n-1)/2;i++,j--){
            aux=vet[i];
            vet[i]=vet[j];
            vet[j]=aux;
        }


}

void lerVetor (int n, int *vet){

    for(int i=0; i<n;i++){
        printf("n%d: ",i);
        scanf("%d", &vet[i]);
    }



}


void main(){

    int *vetor;
    int n;

    printf("Digite o tamanho n do vetor: ");
    scanf("%d", &n);

    vetor = (int*)malloc(n*sizeof(int));
    lerVetor(n,vetor);




    free(vetor);

}







