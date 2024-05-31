/* Se desea señalar aquellos artículos cuyo nivel de
existencia está por debajo del mínimo y que visualicen un mensaje: "Alerta: Hacer
Pedido". Cada artículo contiene un registro con los siguientes campos:
codigo, nivel minimo, |nivel actual, descripcion, precio unitario.*/

#include <stdio.h>

    #define MAX 100
    #define MAX_STR 60
    int i = 0;
    int op;
    struct articulo
    {
        int codigo;
        int nivelMinimo;
        int nivelActual;
        char descripcion[MAX_STR];
        float precioUnitario;
    
    }articulos[MAX];

    void pedirDatos();
    void alerta();

   void pedirDatos(){
    printf("Cuantos articulos deseas ingresar?\n");
    scanf("%d", &op);
   while (i < op){
    printf ("Producto #%d", i+1);
    printf(" Escribe el codigo del producto\n");
    scanf("%d",& articulos[i].codigo);
    printf("Escribe el nivel Minimo del producto.\n");
    scanf("%d",&articulos[i].nivelMinimo);
    printf("Escribe el nivel actual del producto\n");
    scanf("%d",&articulos[i].nivelActual);
    printf("Escribe la descripcion del producto\n");
    scanf("%s", articulos[i].descripcion);
    printf("Escribe el precio unitario del producto.\n");
    scanf("%f", &articulos[i].precioUnitario);
    i++;
   }

   printf("\n");
   }

   void alerta(){
    i = 0;
    while (i < op)
    {
        if (articulos[i].nivelActual <= articulos[i].nivelMinimo )
        {
            printf("Alerta, hacer pedido de producto %d\n", articulos[i].codigo);
        }
        i++;
    }
    }

int main(int argc, char const *argv[])
{
    
 pedirDatos();
 alerta();
    
    return 0;
}
