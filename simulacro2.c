#include <stdio.h>

int main(int argc, char *argv[]) {
	float suma,promedio;
	
	printf("Las calificacionde de una person son \n ");
	printf("10 , 9, 7 y 5 ¿Cual sera el promedio?\n ");
	
	suma = 10 + 9 + 7 + 5;
	promedio  = suma / 4;
	printf("El promedio es %.2f\n",promedio);
	
	if(promedio >=9){
		printf("Su calificacion es A");
		
	}else if(promedio >=8){
		printf("Su calificacion es B");
	}else if(promedio >=7){
		printf("Su calificacion es C");
	}else if(promedio<=5){
		printf("Su calificacion es F");
	}else if(promedio<0){
		printf("Esta calificacion no es valida");
	}
	
	
	return 0;
}

