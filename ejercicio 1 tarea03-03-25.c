#include <stdio.h>
#include <math.h>
double PI=3.14159;
int main()
{
    float l,pt,at,r;
    l=7;
    pt = l*PI/2+3*l+8/5.0*l;
    //formula del area del cuadrado y rectangulo L*L formula de el circulo PI*r*r
    at = l*l+PI*pow(l/2,2)/2+(l/5)*(l/5*3)*2+(l/5)*(l/5)*2;
    //resultados de Pt y At
    printf("El perimetro total es:=%f\n", pt);
    printf("El area total es:=%f", at);
   return 0;
}
