#include <stdio.h>

void tabla_multiplcar(int numerotabla){
	int resultado,i;
	for (i=1; i<=10; i++){
		
		resultado = i * numerotabla;
		
		printf( "\n   %d * %d = %d", numerotabla, i, resultado );
		
		
	}
}

int main(int argc, char *argv[]) {
	int numerotabla;
	printf("Escriba el numero que desea multiplicar \n");
	scanf("%d", &numerotabla);
	tabla_multiplcar (numerotabla);
	return 0;
}

