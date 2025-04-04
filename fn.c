#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int operacion(int n){
    return n*(n+1)/2;
}


int main(int argc, char *argv[]){

    int n= atoi (argv [1]);

    int op= operacion(n);

    printf("%d", op);
    return 0;
}