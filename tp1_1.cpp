#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){

	int var= 9;
	int *p;
	p= &var;

	

	printf(" 1)---contenido que guarda el puntero ---%d \n", *p);

	printf("2)---direccion de memoria que guarda el puntero p es ...%p \n", p);// EN EL PUNTO 2 Y 3 LAS DIRECCIONES SON IGUALES YA Q P ESTA APUNTANDO A LA DIRECCION DE VAR 
    
    printf("3)---direccion de memoria de var  %p \n", &var);

    printf("4)---direccion de memoria del puntero ---%p \n", &p); // LA DIRECCION DE P ES DISTINTA XQ EL PUNTERO SOLO APUNTA A OTRA DIRECCION NO CAMBIA SU DIRECCION 

    printf("tamanio de memoria utilizado por variable %d \n", sizeof(var));
}