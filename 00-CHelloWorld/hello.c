#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("output.txt", "w"); // Abrir el archivo en modo escritura ("w")

    if (fp == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    fprintf(fp, "Hello, World!\n"); // Escribir en el archivo

    fclose(fp); // Cerrar el archivo
    return 0;
}
