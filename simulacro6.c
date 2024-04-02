#include <stdio.h>

int main(int argc, char *argv[]) {
	float suma,promedio;
	float matematicas, biologia, historia;
	matematicas = 10;
	biologia = 10;
	historia = 10;
	
	printf("Las calificacionde de una person son \n ");
	printf("10 en Matematicas , 8 en Biologia, 5 en Historia ¿Cual sera el promedio?\n ");
	
	suma = matematicas+ biologia + historia;
	promedio  = suma / 3;
	printf("El promedio es %.2f\n",promedio);
	
	if(promedio >=9){
		printf("felicidades\n");
	}else if(promedio >=8){
		printf("Buen alumno\n");
	}else if(promedio >=7){
		printf("te tienes que esforzar\n");
	}else if(promedio<=7){
		printf("no pasaras año\n");
	}else if(promedio==0){
		printf("Te tienes que esforzar vastante  \n");
	}
	
	if (matematicas > biologia && matematicas > historia){
		printf("matematicas es la calificacion mas alta con..%f",matematicas);
	}else if(biologia > matematicas && biologia > historia){
		printf("Biologia es la calificacion mas alta con..%f",biologia);
		
	}else if(historia > matematicas && historia > biologia){
		printf("Historia es la calificacion mas alta con..%f",historia);
	}else if (historia == matematicas && historia == biologia){
		printf("Todas la calificaciones son iguales");
	}
			 
	return 0;
}

