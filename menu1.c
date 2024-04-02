#include <stdio.h>

int main(int argc, char *argv[]) {
	int opcion,n1,n2,suma;
	float h,hrs,pagot;
	suma = 0;
	n1 = 1;
	n2 = 10;
	
	do{
		printf("\n-----MENU PRINCIPAL-----\n");
		printf("Elije una opcion  \n ");
		printf("1 La suma de numeros pares de una una secuencia de numeros\n");
		printf("2 establecer el salario de una persona por 7 dias\n");
		printf("3 Salir \n");
		scanf("%d",&opcion);
		
		switch(opcion){
		case 1:
			printf(" La suma de numeros pares de una una secuencia de numeros\n");
			while(n1<=n2){
				printf("%d ", n1);
				if (n1 % 2 == 0){
					suma = suma + n1;
				}
				n1 ++;
			}
			printf("\nLa suma de los numeros pares en esta secuencia %d \n", suma);
			printf("****************\n\n");
			break;
			
		case 2:
			printf("¿cuanto gana una persona por semana si trabaja 7 horas, si el pago es de $227 por 8 horas?\n ");
			
			h = 227 / 8;
			printf("si por 8 horas gana 227 por hora ganara.... $ %.2f \n",h);
			
			hrs = h * 7;
			printf("Por trabajar 7hrs diarias ganara... $ %.2f \n",hrs);
			
			pagot = hrs * 7;
			printf("por semana ganara..... $ %.2f \n",pagot);
			printf("****************\n\n");
			
			break;
		case 3:
			printf("Estas saliendo del programa..\n");
			break;
		default:
			printf("La opcion no es valida\n");
		}
	} while(opcion !=3);
	return 0;
}

