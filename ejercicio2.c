/*Desarrollar un programa que permita ingresar y almacenar 5 registros de
información en el archivo agenda.dat, luego abrir el archivo e imprimir a pantalla todos
los registros.
nombre, edad, direcion, ciudad, telefono*/

#define MAX 100
#define MAX_STR 60
#include <stdio.h>
typedef struct{
    char nombre[MAX_STR];
    char telefono[MAX_STR];
    int edad;
    char direccion[MAX_STR];
    char ciudad[MAX_STR];
} agenda;
agenda datos[MAX];

int i = 0;
void pedirDatos();
void imprimirDatos();

void pedirDatos(){
    i = 0;
    while (i<5)
    {
         printf("Datos # %d\n", i+1);
    printf("Escribe tu nombre.\n");
    scanf("%s", &datos[i].nombre);
    printf("Escribe tu telefono.\n");
    scanf("%s", &datos[i].telefono);
    printf("Escribe tu edad.\n");
    scanf("%d", &datos[i].edad);
    printf("Escribe tu direccion.\n");
    scanf("%s", &datos[i].direccion);
    printf("Escribe tu ciudad.\n");
    scanf("%s", &datos[i].ciudad);
    i++;
    }
    }


    void imprimirDatos(){
       i = 0;
       while (i<5)
       {
        printf("Datos # %d\n", i+1);
        printf("Nombre: %s\n", datos[i].nombre);
        printf("Telefono: %s\n", datos[i].telefono);
        printf("Edad: %d\n", datos[i].edad);
        printf("Direccion: %s\n", datos[i].direccion);
        printf("Ciudad: %s\n", datos[i].ciudad);
        printf("\n");
        i++;
    }
       }
       
        


int main(int argc, char const *argv[])
{
        pedirDatos();
        imprimirDatos();
        return 0;
}