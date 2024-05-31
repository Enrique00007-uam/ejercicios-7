/*5: El director de un colegio, desea un programa de computadora que procese
un archivo de registros denominado calificaciones.dat correspondiente a los diferentes
alumnos de una asignatura, con el fin de obtener la siguiente información:

#carnet, nombre, apellidos, Nota_final

A. Impresión a pantalla de todos los registros.
B. La nota más alta y número de identificación del alumno correspondiente. Si existen
varios alumnos con la misma nota más alta, se deberán visualizar todos ellos.
C. Nota promedio del curso.*/


#include <stdio.h>
int i = 0;
int j;
int op;
#define MAX_STR 60
#define MAX 100

struct alumno
    {
        int carnet;
        char nombre[MAX_STR];
        char apellido[MAX_STR];
        int notaFinal;

    
    }alumnos[MAX];

    void pedirDatos();
    void imprimirDatos();
    void mostarNotas();
    void promedioCurso();
    void menu();
    void principal();



     
     void pedirDatos(){
        printf("Datos #%d\n", i+1);
        printf("Escribe tu carnet. \n");
        scanf("%d", &alumnos[i].carnet);
        printf("Escribe tu nombre. \n");
        scanf("%s", &alumnos[i].nombre);
        printf("Escribe tu apellido. \n");
        scanf("%s", &alumnos[i].apellido);
        printf("Escribe tu calificacion.\n");
        scanf("%d", &alumnos[i].notaFinal);
        printf("\n");
        i++;
    }
    void imprimirDatos(){
        j = 0;
        while (j < i)
        {
        printf("Datos #%d\n", j+1);
        printf("Carnet: %d\n",alumnos[j].carnet );
        printf("Nombre: %s\n",alumnos[j].nombre );
        printf("Apellido: %s\n",alumnos[j].apellido );
        printf("Calificacion: %d\n",alumnos[j].notaFinal);
        printf("\n");
        j++;
        }
}

void mostarNotas(){
   j = 0;
   int notaMax = 0;
   int alumnoMax;
    
    while (j < i)
    {
        if (alumnos[j].notaFinal > notaMax)
        {
            notaMax = alumnos[j].notaFinal;
            alumnoMax = alumnos[j].carnet;
        }
    j++;
    }

    j = 0;
    while (j < i)
    {
        if (alumnos[j].notaFinal == notaMax)
        {
            printf("El alumno con el carnet %d tiene la calificacion mas alta con %d\n", alumnos[j].carnet, notaMax);
        }
        j++;
    }
   
}


void promedioCurso(){
    int suma = 0;
    float promedio = 0;
    j = 0;
    while (j < i)
    {
       suma += alumnos[j].notaFinal;
       j++;
       }

    promedio = suma/j;
    printf("El promedio general es; %f", promedio);
    }

void menu(){
    printf("1. Escribir datos. \n");
    printf("2. Mostar datos. \n");
    printf("3. Mostar nota mayor. \n");
    printf("4. Mostar promedio. \n");
    printf("5. Salir. \n");
}

void principal(){
  
   while (op < 5)
   {
    
   
    menu();
    printf("Escribe una opcion. \n");
   scanf("%d", &op);
    switch (op)
    {
    case 1:
        pedirDatos();
        break;
        case 2:
        imprimirDatos();
        break;
        case 3:
         mostarNotas();
        break;
        case 4:
        promedioCurso();
        break;
        case 5:
        printf("Saliendo...");
        break;
    
    default:
    printf("Opcion invalida. /n");
        break;
    }

   }
   
}

int main(int argc, char const *argv[])
   {
    principal();
    return 0;
   }