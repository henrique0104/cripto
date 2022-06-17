#include<stdio.h>
#include<math.h>

#define N 50000
int main(void){
    int crivo[N];
    int peneira[N];
    int i,j;
    int contador = 0;
    float k;

    int p1 = 0, p3 = 0;
    

    for(i = 0; i<N; i++){
        crivo[i] = (2*i + 3);
        peneira[i] = 1;
    }
    
    
    for (j = 0; j<sqrt(N); j++){
        
        if (peneira[j]){

            for(i = j + ((j+1) * crivo[j]); i<N;){
                peneira[i] = 0;
                i = i + crivo[j];
            }
        }
    }
    
    for (i = 0; i<N; i++){
        if (peneira[i]) contador++;
    }

    int vetor[contador];

    for (i = 0, j = 0; i < N; i++){
        if (peneira[i]){
            vetor[j] = crivo[i];
            j++;
        }
    }

    printf("\n");

    contador = 100;

    
    for (i = 0; i<j; i++){

        
        if (vetor[i]>contador){
            printf("p1(%d) = %d, p3(%d) = %d, p1(%d)/p3(%d) = %f\n",contador, p1, contador, p3, contador, contador, k);
            contador += 100;

        }


        if ((vetor[i] % 4) == 1) {
            p1++;
        }
        else {
            p3++;
        }

        k = ((float)p1) / (p3);
    }

    //k = ((float)p1) / (p3);

    printf("\np1(100000) = %d, p3(100000) = %d, p1/p2 %f\n",p1, p3, k);

    /*
    for (i = 0; i<j; i++){
        printf("%d ",vetor[i]);
    }
*/
    return 0;
}
