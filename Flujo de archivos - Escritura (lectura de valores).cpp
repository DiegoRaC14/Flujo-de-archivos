/* Escritura - Lectura de valores */

#include <stdio.h>

int main() {
    char caracter;
    int num;
    FILE *archivo;  // Declaración de un puntero de archivo

    archivo = fopen("archivo1.txt", "r");  // Abre el archivo "valores.txt" en modo lectura

    if (archivo == NULL) {  // Comprueba si hubo un error al abrir el archivo
        perror("Error al abrir el archivo");
        return 1;  // Sale del programa con un código de error
    }

    while (feof(archivo) == 0) {  // Mientras no se alcance el final del archivo
        fscanf(archivo, "%d", &num);  // Lee un número del archivo y lo almacena en la variable "num"
        printf("%d\n", num);  // Imprime el número leído en la pantalla, seguido de un salto de línea
    }

    fclose(archivo);  // Cierra el archivo después de usarlo

    return 0;  // Sale del programa con un código de éxito
}

