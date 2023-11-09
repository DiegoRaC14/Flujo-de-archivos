/*Flujo de archivos: Lectura */

#include <stdio.h>

int main(){
	
	char caracter;
	FILE * flujo = fopen("Ordenamiento por inserción (insertion sort).cpp","r");//Abrir el archivo en modo lectura
	
	if (flujo == NULL)//Si el archivo marca error
	{
		perror("Error en la apertura del archivo");//Se usa para imprimir mensajes de error
		return 1;
	}
	
	while (feof(flujo) == 0)//Mientras la función regrese un 0 todavía hay contenido en el documento
	{
		caracter = fgetc(flujo);//Lee un caracter del archivo y lo almacena en la variable
		printf("%c",caracter);//Imprime el caracter leído en la pantalla
		
	}
	
	fclose(flujo);//Cierra el flujo
	printf("\n\Todo esta viento en popa... \n\n\n");
	
	return 0;
}

