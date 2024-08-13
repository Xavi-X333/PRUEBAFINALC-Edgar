#include <stdio.h>
#include <stdlib.h>

int main() {
    int *puntero;
    int i, vector;
    printf("¿Cuantos elementos quiere para el vector?: >");
    scanf("%d", &vector);
    puntero = malloc(vector*sizeof(int));
    for(i=0; i<vector;i++) {
        printf("Ingrese el valor: >");
        scanf("%d", &puntero[i]);
    }
    printf("Mostrar el contenido del vector: ");
    for(i=0; i<vector;i++) {
        printf("\n%d", puntero[i]);
    }
    free(puntero);
    return 0;
}
