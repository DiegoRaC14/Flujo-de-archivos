/* Flujo de archivos: Escritura (creación de un nuevo archivo) */

#include <stdio.h>

int main() {
    FILE * archivo;

    archivo = fopen("archivo2.txt", "w");  // Abre el archivo "archivo2.txt" en modo escritura

    if (archivo == NULL) {  // Comprueba si hubo un error al abrir el archivo
        perror("Error al crear el archivo");  // Muestra un mensaje de error
        return 1;  // Sale del programa con un código de error
    }

    fprintf(archivo, "Este es un nuevo archivo.\n");  // Escribe una cadena en el archivo
    fclose(archivo);  // Cierra el archivo después de usarlo

    return 0;  // Sale del programa con un código de éxito
}
