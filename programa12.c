#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int cong (int a, int p){
    int x = a%(p*p);
    int mod = 1;

    int i;

    for (i = 1; i < p; i++){
        mod = (mod * x) % (p*p);
    }

    if (mod == 1) {
        return 1;
    }
    
    return 0;
}


int main (void){
    int a,r;

    int *crivo;
    int *peneira;
    int i,j;

    int contador = 0;

    puts("insira a");
    scanf("%d",&a);

    puts("insira r");
    scanf("%d",&r);

    crivo = (int*) malloc(r*sizeof(int)/2);
    peneira = (int*) malloc(r*sizeof(int)/2);

    for(i = 0; i<r/2; i++){
        crivo[i] = (2*i + 3);
        peneira[i] = 1;
    }
    
    
    for (j = 0; j<sqrt(r/2); j++){
        
        if (peneira[j]){

            for(i = j + ((j+1) * crivo[j]); i<r/2;){
                peneira[i] = 0;
                i = i + crivo[j];
            }
        }
    }

    puts("os primos sao:");
    

    for(i = 0; i < r/2; i++){
        if (peneira[i]){
            if (cong(a,crivo[i])){
                contador++;
                printf("%d\n",crivo[i]);
            }
        }
    }

    printf("%d satisfazem",contador);

    return 0;
}
