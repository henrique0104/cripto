#include<stdio.h>
#include<math.h>

#define N 5000
int main(void){
    int crivo[N];
    int peneira[N];
    int i,j;
    long long int contador = 0;

    for(i = 0; i<N; i++){
        crivo[i] = (2*i + 3);
        peneira[i] = 1;
    }
    
    
    for (j = 0; j<sqrt(N); j++){
        
        if (peneira[j]){

            for(i = j + ((j+1) * crivo[j]); i<N;){
                peneira[i] = 0;
                i = i + crivo[j];
                contador++;
            }
        }
    }
     
     /*
    
    for (i = 0; i <N; i++){
        printf("%d ",crivo[i]);
    }

    puts("\n");

    for (i = 0; i <N; i++){
        printf("%d ",peneira[i]);
    }

    puts("\n");

    */

    for (i = 0; i<N; i++){
        if (peneira[i]==1){
            printf("%d ",crivo[i]);
        }
    }

   /* int vetor[N - contador];

    for (i = 0, j = 0; i < N; i++){
        if (peneira[i]){
            vetor[j] = crivo[i];
            j++;
        }
    }

    printf("\n");

    for (i = 0; i<j; i++){
        printf("%d ",vetor[i]);
    }

*/
    printf("\no programa rodou %d vezes", (N - contador));

    return 0;
}