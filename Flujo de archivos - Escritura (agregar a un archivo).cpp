/* Flujo de archivos: Escritura (a�adir informaci�n a un n archivo) */

#include <stdio.h>

int main() {
    FILE *archivo;

    archivo = fopen("archivo2.txt", "a");  // Abre el archivo "archivo2.txt" en modo escritura
    //Crea un nuevo archivo si no existe o a�ade algo si ya existe

    if (archivo == NULL) {  // Comprueba si hubo un error al abrir el archivo
        perror("Error al crear el archivo");  // Muestra un mensaje de error
        return 1;  // Sale del programa con un c�digo de error
    }

    fprintf(archivo, "Esto es lo nuevo que se agrega.\n");  // A�ade una cadena de texto a lo existente en el documento
    fclose(archivo);  // Cierra el archivo despu�s de usarlo

    return 0;  // Sale del programa con un c�digo de �xito
}
