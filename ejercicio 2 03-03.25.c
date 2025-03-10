#include <stdio.h>
#include <math.h>
double PI=3.14159;
int main(){
    float l,pt,at;//el perimetro total es:126.2586 y el area:614.1807
    l=7;//formla de la hipotenusa c=raiz de "a" cuadrada mas "b" cuadrada y formula de el area de un circulo es "pi" por radio al cuadrado,la formula de su radio es "pi" por diametro
    float h=sqrt(pow(l,2)+pow(l*3,2));
    pt=PI*(3*l)/2+2*h+4*l+3*l;
    at=PI*pow(3*l/2,2)/2+3*(l*3*l);
    printf("El perimetro total es=%f  ", pt);
    printf("El area total es=%f", at);
    return 0;
}
