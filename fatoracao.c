#include<stdio.h>
#include<math.h>

int main(void){
    
    int numero = 111*2*3;  //infinitos primos?  ;)  //
    int candidato = 2;
    int multiplicidade = 0;


    double maximo = sqrt(numero);  //proximos capitulos//

    while ((numero>1)&&(candidato<=maximo)){
        if(numero%candidato == 0){
            multiplicidade++;
            numero = numero/candidato;
            continue;
        }
        else{
            if (multiplicidade>0){
                printf("%d tem multiplicidade %d\n", candidato, multiplicidade);
            }
            candidato++;
            multiplicidade = 0;
        }

    }
    
    printf("%d tem multiplicidade %d", candidato, multiplicidade);

    

    return 0;
}