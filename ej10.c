#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>


int main(int argc, char *argv[]){

    srand(time(NULL));
    int b= atoi (argv[1]);
    int minimo= 0;
    int maximo= 36;
    int entre= maximo-minimo;
    int r= rand() % entre + minimo;
    printf("el numero puesto es: %d\n el numero aleatorio es: %d\n",b,r);
    if (r==b){

        printf("true");
    } else {
        printf("false");
    }    

    return 0;

}