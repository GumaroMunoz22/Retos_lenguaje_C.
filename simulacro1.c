#include <stdio.h>

int main(int argc, char *argv[]) {
	float metror, litrosr, metrosar;
	float division,multiplicacion;
	metror = 1500;
	litrosr = 40000;
	metrosar =2000;
	
	printf("1.5 km  gasto 40 l ¿Cuanto litros gasto por metro?\n ");
	
	division = metror / litrosr;
	printf("por metro recorre %.4f\n",division);
	
	printf("¿Cuantos litros ocupara para recorrer 2000 m\n ");
	
	multiplicacion = division * metrosar;
	printf("por metro recorre %.2f \n",multiplicacion);
	
	
	return 0;
}

