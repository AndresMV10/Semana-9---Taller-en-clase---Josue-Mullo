#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct empleado
{
    char nom[30];
    char dir[30];
    char tel[10];
} dat_empleados[3];

int main(){
    int i, j;
    for ( i = 0; i < 3; i++)
    {
        printf("Nombre: ");
        gets(dat_empleados[i]. nom);
        printf("direccion: ");
        gets(dat_empleados[i]. dir);
        printf("telefono: ");
        gets(dat_empleados[i]. tel);
        printf("\n");
    }
    for ( i = 0; i < 3; i++)
    {
        puts(dat_empleados[i].nom);
        puts(dat_empleados[i].dir);
        puts(dat_empleados[i].tel);
        printf("\n");
    }
    
}