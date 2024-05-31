/* Desarrollar un programa que permita crear un archivo agenda.dat de
direcciones, cuyos registros constan de los siguientes campos: 
Nombre, telefono , dedad, direcion, ciudad*/

#include <stdio.h>

#define MAX 100
#define MAX_STR 60
typedef struct{
    char nombre[MAX_STR];
    char telefono[MAX_STR];
    int edad;
    char direccion[MAX_STR];
    char ciudad[MAX_STR];
} agenda;
agenda datos[MAX];

int i = 0;
void PedirDatos();

void PedirDatos(){
    printf("Escribe tu nombre.\n");
    scanf("%s", &datos[i].nombre);
    printf("Escribe tu telefono.\n");
    scanf("%s", &datos[i].telefono);
    printf("Escribe tu edad.\n");
    scanf("%d", &datos[i].edad);
    printf("Escribe tu direccion.\n");
    scanf("%s", &datos[i].direccion);
    printf("Escribe tu ciudad.\n");
    scanf("%s", &datos[i].ciudad);}

int main(int argc, char const *argv[])
{
    PedirDatos();
 return 0;
}

