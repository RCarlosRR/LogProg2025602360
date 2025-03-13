#include <stdio.h>
#include <math.h>
int main()
{
    //calcular el area total y el perimetro total de todas las sig. figuras
    float a,b,pt,at;
    a=3;
    b=4;
    pt=a+b+sqrt(pow(b,2)+pow(a,2));
    at=(b*a)/2;
    printf("pt=%f",pt);
    printf("at=%f",at);
    return 0;
}
