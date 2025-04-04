#include <stdio.h>
#include <stdlib.h>

int resta(int x, int y){
    return x-y;
}


int main(int argc, char *argv[]){

    int x= atoi (argv[1]);
    int y= atoi (argv[2]);
    int res= resta(x,y);
    
    printf("%d", res);

    return 0;
}