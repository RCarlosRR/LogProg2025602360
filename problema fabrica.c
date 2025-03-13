#include<stdio.h>
#include<math.h>

 int main(){
     float pago,ISR,Sbruto,Sneto,descuento;
     int horas;
     pago=100;
     ISR=0.1;

     printf("cuantas horas trabajaste?");
     scanf("%d",&horas);

     Sbruto=horas*pago;
     descuento=Sbruto*ISR;
     Sneto=Sbruto-descuento;

     printf("salario neto=%f", Sneto);
      printf("salario deescuento=%f", descuento);
       printf("salario bruto=%f" , Sbruto);
 return 0;
 }
