#include<stdio.h>

int main (void){
    int a,p,b;
    int i;
    int x;

    puts("INSIRA p");
    scanf("%d",&p);

    puts("INSIRA a");
    scanf("%d",&a);
    a = a%p;

    puts("INSIRA b");
    scanf("%d",&b);
    b = b%p;

    if (!a){
        printf("não existem inversos, %d = 0 mod %d",a,p);
        return 1;
    }

    int mods = 1;

    for (i=1; i<(p-1); i++){
        mods = (mods * a) % p;
    }

    printf("o inverso é %d\n", mods);
    
    x = (b*mods)%p;

    printf("a*x = b\n");
    printf("%d * %d == %d mod %d\n",a,x,b,p);

    printf("x = %d",x);
    return 0;
}
