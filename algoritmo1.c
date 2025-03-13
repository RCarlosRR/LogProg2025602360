#include<stdio.h>
#include<math.h>
int main(){
 const int cover=500;
 const float DES=0.25;
 int NumM,NumH;
 float total;
 printf("Cuantas mujeres son?");
 scanf("%d",&NumM);
 printf("Cuantos hombres son?");
 scanf("%d",&NumH);
 total=(NumH*cover)+(NumM*cover)-(NumM*cover*DES);
 printf("Total de cover:%f", total);
 return 0;
}
