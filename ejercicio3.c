/*programa, que contiene los datos de un conjunto
de empleados y cuya clave es el número DNI. Desarrollar un programa capaz de
categorizar los salarios en "Altos", "Medios" y "Bajos" e imprimirlos a pantalla.

Datos dni , nombre, apellidos, sexo , cargo , salario*/

#include <stdio.h>

int op;
#define MAX 100
#define MAX_STR 60
typedef struct 
{
    int dni;
    char nombre[MAX_STR];
    char apellido[MAX_STR];
    char sexo[MAX_STR];
    char cargo[MAX_STR];
    int salario;
}info;
info datos[MAX];
    


void pedirDatos();
void cateSalarios();

void pedirDatos(){
    int i = 0;
    printf("Cuantos datos deseas ingresar?\n");
    scanf("%d", &op);

    while (i<op)
    {
        printf("Datos # %d\n", i+1);
        printf("Escribe tu DNI.\n");
        scanf("%d", &datos[i].dni);
        printf("Escribe tu nombre.\n");
        scanf("%s", &datos[i].nombre);
        printf("Escribe tu apellido.\n");
        scanf("%s", &datos[i].apellido);
        printf("Escribe tu sexo.\n");
        scanf("%s", &datos[i].sexo);
        printf("Escribe tu cargo.\n");
        scanf("%s", &datos[i].cargo);
        printf("Escribe tu salario.\n");
        scanf("%d", &datos[i].salario);
        i++;
    }
} 

void cateSalarios(){
    
    
    for(int i = 0; i < op; i++){ 
        if(datos[i].salario <= 500){
            printf("%s %s tiene un salario bajo.\n", datos[i].nombre, datos[i].apellido);
        } else if(datos[i].salario <= 1000){
            printf("%s %s tiene un salario medio.\n", datos[i].nombre, datos[i].apellido);
        } else {
            printf("%s %s tiene un salario alto.\n", datos[i].nombre, datos[i].apellido);
        }
    }
}
    

    

int main(int argc, char const *argv[])
{

    pedirDatos();
    cateSalarios();


    return 0;
}
