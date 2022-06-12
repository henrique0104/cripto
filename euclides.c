#include <stdio.h>


int euclides(int a, int b){
    if(b==0){
        printf("o mdc é %d",a);
        return a;
    }
    int r = a%b;
    printf ("%d\t %d\t %d\n", a,b,r);
    euclides(b,r);
}

int main(void){
    printf("de\tdo\tr\n");
    euclides(2022,2310);
    return 0;
}