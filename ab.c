#include <stdio.h>
#include <stdlib.h>

int minimo(int a, int b){
    return a>b?b:a;
}


int main(int argc, char *argv[]){

    int a= atoi (argv [1]);
    int b= atoi (argv [2]);
    int ab= minimo(a,b);
    printf("%d", ab);
    return 0;
}