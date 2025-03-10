#include <stdio.h>
int main ()
    {
    float R;
    int x=3;
    float A=(1/2.0)*x;
    float B=(3+x)/(float)2;
    float C=2*(x*x);
    float D=(2+3)*x;
    R=(A+B*C)/D;
    printf("R=%f" ,R);
    return 0;
    //el resultado es 3.7
    }
