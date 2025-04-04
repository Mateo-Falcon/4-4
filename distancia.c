#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double hipo(double x1, double y1, double x2, double y2){
    double x= x1-x2;
    double y= y1-y2
    return sqrt(pow(x,2)+pow(y,2));
}


int main(int argc, char *argv[]){

    double x1 = atof (argv [1]);
    double x2 = atof (argv [2]);
    double y1= atof (argv[3]);
    double y2= atof (argv[4]);
    double dist= hipo(x1,x2,y1,y2);
    printf("%d", dist);
    return 0;
}