#include <stdio.h>

int main(int argc, char *argv[]) {
	int mutiplicacion, suma, i,j;
	i =1;
	j=5;
	mutiplicacion = 1;
	suma = 0;
	
	while(i<=j){
		
		printf("Numero %d \n", i);
		
		
		if (i % 2 == 0){
			mutiplicacion = mutiplicacion * i;
		}
		
		if (i % 2 != 0){
			suma = suma + i;
		}
		
		i ++;
		
		
	}
	printf("La multiplicacion de los numeros pares en esta secuencia %d \n", mutiplicacion);
	printf("La suma de los numeros inpares en esta secuencia %d ", suma);
	return 0;
}

