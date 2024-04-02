#include <stdio.h>

void Matriz(int columnas, int filas){
	int c,f;
	for(c=0; c<columnas; c++){
		//printf("+");
		for(f=0; f<filas; f++){
			printf(" + ");
		}
		printf("\n");
	}
	
}

int main(int argc, char *argv[]) {
	int columnas, filas;
	
	 printf("Escriba el numero  de columnas que desea imprimir en la Matriz \n");
	 scanf("%d", &columnas);
	 
	 printf("Escriba el numero  de filas que desea imprimir en la Matriz \n");
	 scanf("%d", &filas);
	 
	 Matriz (columnas,filas);
	
	return 0;
	
}

