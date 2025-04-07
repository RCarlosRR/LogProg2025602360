#include<stdio.h>
#include<string.h>
int main(){
    int pizza;
    int ingrediente;
printf("Desea una pizza vegetariana? 1-si 2-no \n");
scanf("%d",&pizza);
if (pizza==1){
    printf("Seleccione un ingrediente 1:Pimiento 2:tofu\n");
}   else if(pizza==2){
    printf("Seleccione un ingrediente 3:Peperoni, 4:Jamon, 5:Salmon\n");
}
scanf("%d", &ingrediente);
switch (ingrediente){
case 1:
    printf("tu pizza es vegetariana y contiene mozzarella,tomate y pimiento\n");
    break;
case 2:
    printf("tu pizza es vegetariana y contiene mozzarella,tomate y tofu\n");
    break;
case 3:
    printf("tu pizza NO es vegetariana y contiene mozzarella,tomate y peperoni\n");
    break;
case 4:
    printf("tu pizza NO es vegetariana y contiene mozzarella,tomate y jamon\n");
    break;
case 5:
    printf("tu pizza NO es vegetariana y contiene mozzarella,tomate y salmon\n");
    break;
default:
    printf("valor incorrecto \n");
    break;
}
return 0;
}
