#include <stdio.h>
#include <stdlib.h>

int multiplicacion(int x, int y, int z){
    return (2*x)+(3*y)+(4*z);
}


int main(int argc, char *argv[]){

    int x= atoi (argv [1]);
    int y= atoi (argv [2]);
    int z= atoi (argv [3]);
    int mult= multiplicacion(x,y,z);

    printf("%d", mult);
    return 0;
}