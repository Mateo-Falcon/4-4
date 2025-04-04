#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>


int main(int argc, char *argv[]){

    srand(time(NULL));
    int minimo= 1;
    int maximo= 100;
    int entre=(maximo-minimo);
    int n= rand() % entre+1;
    printf("%d", n);
    return 0;
}