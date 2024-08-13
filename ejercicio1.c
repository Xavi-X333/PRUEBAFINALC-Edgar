#include <stdio.h>
#include <string.h>

typedef struct{
    char nombre[25];
    int codigo;
}Maestro;

typedef struct{
    int carnet;
    char apellido[25];
    char nombre[25];
}Estudiante;

void ingresarDDMaestro(Maestro maestros[],int numMaestros)
{
    for(int i=0; i<numMaestros; i++)
    {
        printf("Ingrese el nombre del maestro %d: ",i+1);
        scanf("%s",maestros[i].nombre);
        printf("Ingrese el codigo del maestro %d: ",i+1);
        scanf("%d",&maestros[i].codigo);
    }
}

void ingresarDEstudiante(Estudiante estudiantes[], int numEstudiantes)
{
    for(int i=0; i<numEstudiantes; i++)
    {
        printf("Ingrese el carnet del estudiante %d: ",i+1);
        scanf("%d",&estudiantes[i].carnet);
        printf("Ingrese el nombre del estudiante %d: ",i+1);
        scanf("%s",estudiantes[i].nombre);
        printf("Ingrese el apellido del estudiante %d: ",i+1);
        scanf("%s",estudiantes[i].apellido);
    }
}

void mostrarDatos(Maestro maestros[],int numMaestros,Estudiante estudiantes[],int numEstudiantes)
{
    printf("\nDatos de los Maestros \n");
    for(int i=0; i<numMaestros; i++)
    {
        printf("Maestro %d \nNombre: %s, Codigo: %d \n",i+1, maestros[i].nombre, maestros[i].codigo);   
    }

    printf("\nDatos de los estudiantes:\n");
    for(int i=0; i<numEstudiantes; i++)
    {
        printf("Estudiante %d \nCarnet: %d, Nombre: %s, Apellido: %s\n",i+1,estudiantes[i].carnet,estudiantes[i].nombre,estudiantes[i].apellido);
    }
}

int main(){
    Maestro maestros[3];
    Estudiante estudiantes[5];

    ingresarDDMaestro(maestros,3);
    ingresarDEstudiante(estudiantes,5);
    mostrarDatos(maestros,3,estudiantes,5);
    return 0;
}












#include <stdio.h>
#include <stdlib.h>

// Función para liberar la memoria asignada a la matriz
void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

// Función para llenar la matriz con valores
void fillMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Ingrese el valor para matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Función para sumar los valores de las filas
void sumRows(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        printf("Suma de la fila %d: %d\n", i, sum);
    }
}

// Función para sumar los valores de las columnas
void sumCols(int** matrix, int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += matrix[i][j];
        }
        printf("Suma de la columna %d: %d\n", j, sum);
    }
}

int main() {
    int rows, cols;

    printf("Ingrese el número de filas: ");
    scanf("%d", &rows);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &cols);

    // Asignación de memoria para la matriz en el main
    int** matrix = (int*)malloc(rows * sizeof(int));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }

    fillMatrix(matrix, rows, cols);

    printf("\nSumas de las filas:\n");
    sumRows(matrix, rows, cols);

    printf("\nSumas de las columnas:\n");
    sumCols(matrix, rows, cols);

    freeMatrix(matrix, rows);

    return 0;
}























