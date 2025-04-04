#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int suma (int a, int b){
    return a+b;
}
int main(int argc, char *argv[]){

    srand(time(NULL));
    int minimo1= 1;
    int maximo1= 6;
    int entre=(maximo1-minimo1);
    int minimo2= 1;
    int maximo2= 6;
    int entre2=(maximo2-minimo2);
    int a= rand() % entre+1;
    int b= rand() % entre2+1;
    int sum= suma(a,b);
    printf("el primer dado es:%d\n el segundo dado es:%d\n la suma es:%d\n",a,b,sum);
    return 0;
}