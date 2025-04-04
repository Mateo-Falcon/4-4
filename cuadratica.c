#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double multiplicacion(double x, double y,double z){
    return 9*pow(x,2)+3*y+z;
}


int main(int argc, char *argv[]){

    double x= atof (argv [1]);
    double y= atof (argv [2]);
    double z= atof (argv [3]);
    int mult= multiplicacion(x,y,z);

    printf("%d", mult);
    return 0;
}