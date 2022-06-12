#include<stdio.h>
void euclidao(int a, int b, int xi, int xj, int yi, int yj){
    if (b==0){
        printf(" o mdc é %d  a = %d  b = %d",a,xi,yi);
        return;
    }

    if ((a%b)==0){
        printf("0\t%d\t*\t*\n",(a/b));
        printf("o mdc é %d  a = %d  e  b = %d", b,xj,yj);
        return;
    }

    int resto = a % b;
    int quociente = a / b;
    int xk = xi - (xj*quociente);
    int yk = yi - (yj*quociente);
    printf("%d\t%d\t%d\t%d\n",resto, quociente, xk, yk);
    xi = xj;
    xj = xk;
    yi = yj;
    yj = yk;
    euclidao(b,resto,xi,xj,yi,yj);
}

int main (void){
    printf("r\t q\t x\t y\n");
    printf("%d\t*\t1\t0\n",272828282);
    printf("%d\t*\t0\t1\n",3242);
    euclidao(272828282,3242,1,0,0,1);

    return 0;
}