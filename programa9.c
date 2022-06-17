#include<stdio.h>
#include<math.h>

int main (void){
    int mods=1;
    int i = 0;

    puts("insira a");
    scanf("%d",&a);
    getchar();

    puts("insira k");
    scanf("%d",&k);
    getchar();

    puts("insira n");
    scanf("%d",&n);
    getchar();

    do
    {   
        i++;
        mods = (a%n * mods) % n;
        printf("%d^%d mod %d = %d\n",a,i,n,mods);

    } while (i<k);
}
