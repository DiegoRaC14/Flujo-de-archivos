/*Flujo de archivos - Contador de comas en un archivo*/

#include <stdio.h>

int main() {
    char caracter;
    int count;
    bool condition;

    FILE *file = fopen("archivo1.txt", "r");  // Abre el archivo "line.txt" en modo lectura

    if (file == NULL) {  // Comprueba si hubo un error al abrir el archivo
        perror("Error en la apertura del archivo");  // Muestra un mensaje de error
        return 1;  // Sale del programa con un código de error
    }

    count = 0; // Inicia el contador de caracteres en 0
    condition = false;

    while (feof(file) == 0)// Mientras no se alcance el final del archivo
	{  
        caracter = fgetc(file);  // Lee un caracter del archivo

        if (caracter == '\n') 
		{
            condition = true;  /* Cuando se encuentra un salto de línea deja de contar las comas.
            Se pude poner "false" para que cuente todos los de la siguiente línea*/
        }

        if (!condition && caracter == ',') // Si no se encuentra una nueva línea y se encuentra una coma incrementa el contador
		{//La condición es false y se encuentra una coma  
            count++;  // Incrementa el contador
        }
    }

    printf("Numero de comas: %d", count);  // Imprime la cantidad de comas encontradas
    fclose(file);  // Cierra el flujo de archivo

    printf("\n\nTodo esta viento en popa...\n\n\n");  // Muestra un mensaje de éxito en la pantalla

    return 0;  // Sale del programa con un código de éxito
}


