#include <math.h>
#include <stdio.h>
int main ()
{
float R;
int x=3;
float A=(1/2.0)*x;
float B=(3+x)/2;
float C=2*pow(x,2);
float D=(2+3)*x;
R=(A+B*C)/D;

printf("R=%f",R);
return 0;
}
