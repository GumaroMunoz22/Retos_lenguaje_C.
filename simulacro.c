#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float i, n1, n2, suma;
	float promedio;
	suma = 0;
	n1 = 1;
	n2 = 20;
	
	printf ("La suma y el promedio de los siguientes numero\n");
	
	for (i=n1; i<=n2; i++){
		printf ("Numero %.0f \n", i);
		suma = suma + i;
	}

	printf("\n La suma total es %.2f \n",suma);
	
	promedio = suma / 20;
	
	printf("\n El promedio es\n %.2f", promedio);
	
	
	return 0;
}

