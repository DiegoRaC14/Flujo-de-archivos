/* Escritura - Lectura de valores */

#include <stdio.h>

int main() {
    char caracter;
    int num;
    FILE *archivo;  // Declaraci�n de un puntero de archivo

    archivo = fopen("archivo1.txt", "r");  // Abre el archivo "valores.txt" en modo lectura

    if (archivo == NULL) {  // Comprueba si hubo un error al abrir el archivo
        perror("Error al abrir el archivo");
        return 1;  // Sale del programa con un c�digo de error
    }

    while (feof(archivo) == 0) {  // Mientras no se alcance el final del archivo
        fscanf(archivo, "%d", &num);  // Lee un n�mero del archivo y lo almacena en la variable "num"
        printf("%d\n", num);  // Imprime el n�mero le�do en la pantalla, seguido de un salto de l�nea
    }

    fclose(archivo);  // Cierra el archivo despu�s de usarlo

    return 0;  // Sale del programa con un c�digo de �xito
}

