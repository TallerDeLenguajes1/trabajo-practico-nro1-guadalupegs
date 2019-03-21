#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int  cuadrado(int num);
void  cuadrado2(int *num);
void invertir(int *x, int *y);
void ordenar(int *z, int *w);
void nombre(int *t);

int main (){

	int var= 9, a=9, b=2, c, d, i;
	//int = leer; 
	int *p;
	p= &var;

	//I)FUNCION QUE DEVUELVE EL CUADRADO DE UN NUMERO 
    printf("el cuadrado de %d es:  %d \n", var, cuadrado(var));

   //II)LO MISMO QUE EL ANTERIOR PERO DEVOLVIENDO UN VOID
    printf("el cuadrado de %d es :", var);
    cuadrado2(p);
    printf("%d", *p);


    
    //printf("\n ingrese un numero ");
   // scanf("%d", &leer);
    //printf("el numero es: %d\n",leer);
   // printf("su direccion es : %p\n",&leer);

   //IV) FUNCION Q INVIERTE VALORES
    invertir(&a,&b);
    printf("\n ----ahora a es: %d y b es: %d \n",a, b);

    //V Y VI) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada,
    //en el primer parámetro el menor y en el segundo el mayor.
	for ( i= 0; i <=3;i++)
	    { 
	    	printf("escriba un numero \n");
	    	scanf("%d", &c);
	    	printf("escriba otro numero\n");
	    	scanf("%d", &d);
	    	ordenar(&c, &d); 
	 		printf("\n ---- ordenados serian --- a es: %d y b es: %d \n",c, d);  	
	    };    

	    nombre(p);

    //ordenar(&a, &b);
    //printf("\n ---- ordenados serian --- a es: %d y b es: %d \n",a, b);

	return 0; 	
}


int  cuadrado(int num){

		return num*num; 
    }


void  cuadrado2(int *num){
 
		*num= *num * *num;
    }

void invertir(int *x, int *y){
	int auxiliar=*x;
	*x=*y;
	*y=auxiliar;
}

void ordenar(int *z, int *w){
	int auxiliar=*z;
	if(auxiliar>*w){
		*z=*w;
		*w=auxiliar;

	};
}

void nombre (int *t){

	printf("contenido de la variable %d\n", *t);
	printf("direccion de la variable %p\n", &t);
}	
