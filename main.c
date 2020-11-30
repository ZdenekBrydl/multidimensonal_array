#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void precteni(int* pole[10][10], int *m, int *n)
{
    int x, y;
    rozmery(&*m, &*n);
    for(x=0; x<*n; x++)
    {
    printf("\nVypis %d prvku do %d radku:\n", *m, x);
        for(y=0; y<*m; y++)
        {
            printf("[%d][%d] = ", x, y);
            scanf("%d", &pole[x][y]);
        }
    }
}

void rozmery(int *m, int *n)
{
    while((*m<=0)||(*m>10))
    {
        printf("Napis kolik bude pole obsahovat sloupcu (max. 10; min. 1): ");
        scanf("%d", &*m);
        if((*m<=0)||(*m>10)) printf("\nSpatne zadane cislo!\n");
    }
    while((*n<=0)||(*n>10))
    {
        printf("Napis kolik bude pole obsahovat radku (max. 10; min. 1): ");
        scanf("%d", &*n);
        if((*n<=0)||(*n>10)) printf("\nSpatne zadane cislo!\n");
    }
}

void vypis(int *pole[10][10], int *m, int *n)
{
    int a, b;
    printf("\n\nPole:\n");
    for(a=0; a<*n; a++)
    {
        for(b=0; b<*m; b++)
        {
            printf("%d ", pole[a][b]);
        }
        printf("\n");
    }
}

int main()
{
    int pole[10][10];
    int m = 0;
    int n = 0;
    precteni(pole, &m, &n);
    vypis(pole, &m, &n);
    return 0;
}
