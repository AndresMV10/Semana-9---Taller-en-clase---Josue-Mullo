#include <stdio.h>
#include <stdlib.h>

#define FILAM1 2
#define COLUM1 4
#define FILAM2 4
#define COLUM2 3

int main() {
    char a[FILAM1][COLUM1]= {{2, 3, 4, 5}, {6, 7, 8, 9}};
    char b[FILAM2][COLUM2] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {0, 1, 2}};
    char c[FILAM1][COLUM2];
    int i, j, k;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%d][%d] = %d\n", i, j, b[i][j]);
        }
    }

    printf("La matriz resultante de la multiplicacion de de la matriz a y b es:");

    for(i=0; i<FILAM1; i++)
    {   for(j=0; j<COLUM2; j++)
        {
            c[i][j]=0;
            for(k=0;k<COLUM1;k++)
            {
                fflush(stdin);
                c[i][j] += a[i][k]*b[k][j];
            }    
            
        }
    }
    
    printf("\n\n");
    // Desplegar
    for(i=0; i<FILAM1; i++)
    {
        for(j=0;j<COLUM2;j++)
        {
                fflush(stdin);
                printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}