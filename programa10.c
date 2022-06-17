// capitulo 5 exercicio 16

#include<stdio.h>

int main (void){

    int a,p;
    int i;

    puts("INSIRA a");
    scanf("%d",&a);

    puts("INSIRA p");
    scanf("%d",&p);

    if (p%a == 0){
        printf("não existem inversos, %d = 0 mod %d",a,p);
        return 1;
    }

    int mods = 1;

    for (i=1; i<(p-1); i++){
        mods = (mods * a) % p;
    }

    printf("o inverso é %d", mods);

    return 0;
}
