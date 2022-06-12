#include<stdio.h>
#include<math.h>

int main (void){
    int a = 13;
    int k = 1001;
    int n = 19;

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
    
/*

    int quociente;
    int resto;
    double resultado;


    if (i<k){

        quociente = k / i;
        resto = k % i; 

        resultado = pow((double) mods, (double) quociente);
        resultado = ((int) resultado % n) * ((int) pow ((double) a, (double) resto) % n);

    }

    

    printf("= %1.f\n",resultado);

*/
}