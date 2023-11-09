/* Flujo de archivos: Escritura (usar stdout) */

#include <stdio.h>

int main()
{
	FILE * file = freopen("line.txt","w",stdout);
	
	if (file == NULL){
		perror("Error en la apertura del archivo");
		return 1;
	}
	
	printf("Este texto se escribira en el archivo.\n");/*Ahora la salida est�ndar (stdout) est� dirigida
	al "archivo3.txt".Esto significa que cualquier cosa que normalmente se imprimir�a en la pantalla usando
	printf se escribir� en el archivo "archivo3.txt" en su lugar.*/
	
	fclose(file);// Cierra el archivo
	
	return 0;
}
