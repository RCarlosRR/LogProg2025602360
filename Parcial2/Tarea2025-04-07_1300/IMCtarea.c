#include<stdio.h>
#include<math.h>
int main (){
    float estatura,peso,IMC;
    printf("Ingrese su peso en KG y su altura en metros (ejemplo: 90 1.75 )\n");

    scanf("%f %f", &peso, &estatura);
    IMC=peso/(pow(estatura,2));
    printf("tu IMC es de: %f\n" ,IMC);
    if (IMC<=18.4){
        printf("Bajo peso");
    }   else if (IMC<=24.9){
        printf("Normal");
    }   else if (IMC<=29.9){
        printf("sobrepeso");
    }   else if (IMC<=34.9){
        printf("Obesidad clase 1");
    }   else if (IMC<=39.9){
        printf("Obesidad clase 2");
    }   else if (IMC>=40){
        printf("Obesidad clase 3");
    }   else {
        printf("Datos invalidos");
    }
return 0;
}
