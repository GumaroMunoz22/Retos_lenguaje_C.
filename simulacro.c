#include <stdio.h>

int main(int argc, char *argv[]) {
	int n1, n2, suma;
	float promedio;
	suma = 0;
	
	printf("Ingrese un el primer numero entero\n");
	scanf("%d \n",&n1);
	scanf("%d\n",&n2);
	while(n1<=n2){
		printf(" %d \n ", n1);
		n1++;
		
		suma = suma + n1;
	}
	printf("la suma total es \n %d", suma);
	
	return 0;
}

