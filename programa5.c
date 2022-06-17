// captiulo 3 execicio 10
#include<stdio.h>
#include<math.h>

int main(void){
    int a = 8;
    int b = -530;
    int c = 7681;
    int i,j;

    int x,f;

    int maior;
    int contador;

    if (a*100*100 + b+100 + c >= c) maior = a*100*100 + b+100 + c;
    else maior = c;
    
    int n = (maior-1)/2;


    int crivo[n];
    int peneira[n];

    for(i = 0; i<n; i++){
        crivo[i] = (2*i + 3);
        peneira[i] = 1;
    }

    for (j = 0; j<sqrt(n); j++){
    
        if (peneira[j]){

            for(i = j + ((j+1) * crivo[j]); i<n;){
                peneira[i] = 0;
                i = i + crivo[j];
            }
        }
    }

    
    for (i = 0; i<n; i++){
        if (peneira[i]) contador++;
    }
    
    int vetor[contador];
    
    for (i = 0, j = 0; i < n; i++){
        if (peneira[i]){
            vetor[j] = crivo[i];
            j++;
        }
    }

    
    for(x = 0; x <101; x++){

        f = a*x*x + b*x + c;

        for (i = 0; i < j; i++){
            if (f == vetor[i]){
                printf("f(%d) = %d\n", x , f);
            }
        }

    }


    return 0;
  

}
