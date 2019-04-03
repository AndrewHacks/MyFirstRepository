#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

void restar(int a[50][50],int b[50][50],int filas,int columnas);
void sumar(int a[50][50],int b[50][50],int filas,int columnas);
char menu();
int main()
{

    int p;
    int matriz1[50][50],matriz2[50][50], matriz3[50][50];
	int filas,columnas,i,j,m,n,f,c,k;
    do
    {

        p=menu();
        switch(p)
        {
            case '1':
            Beep(1000,100);
            system("cls");
            {
            system("COLOR D0");
            printf("\n\nDigite el numero de filas de la matriz -> ");
            scanf("%i",&filas);
            printf("\n\nDigite el numero de columnas de la matriz -> ");
            scanf("%i",&columnas);
            printf("\n\n");
            for(i=0;i<filas;i++)
            {
                for(j=0;j<columnas;j++)
                {
                        printf("\n\nDigite el valor de la matriz 1 [%i][%i] -> ",i+1,j+1);
                        scanf("%i",&matriz1[i][j]);
                }
            }

            printf("\n");

            for(i=0;i<filas;i++){
                for(j=0;j<columnas;j++){
                    printf("\n\nDigite el valor de la matriz 2 [%i][%i] -> ",i+1,j+1);
                    scanf("%i",&matriz2[i][j]);
                }
            }

            printf("\n\nla suma de las matrices es:\n\n");
            sumar(matriz1,matriz2,filas,columnas);

            getch();
            }

            getch();

        break;

            case '2':
                Beep(1000,100);
                system("cls");
                {
                system("COLOR OB");
                printf("\n\nDigite el numero de filas de la matriz -> ");
                scanf("%d",&filas);
                printf("\n\nDigite el numero de columnas de la matriz -> ");
                scanf("%d",&columnas);
                printf("\n\n");
                for(i=0;i<filas;i++)
                {
                    for(j=0;j<columnas;j++)
                    {
                            printf("\n\nDigite el valor de la matriz 1 [%i][%i] -> ",i+1,j+1);
                            scanf("%d",&matriz1[i][j]);
                    }
                }

                printf("\n");

                for(i=0;i<filas;i++){
                    for(j=0;j<columnas;j++){
                        printf("\n\nDigite el valor de la matriz 2 [%i][%i] -> ",i+1,j+1);
                        scanf("%d",&matriz2[i][j]);
                    }
                }

                printf("\n\nla resta de las matrices es:\n\n");
                restar(matriz1,matriz2,filas,columnas);
                getch();
                }
                getch();

            break;

            case '3':
            Beep(1000,100);
            system("cls");
            {
            system("COLOR 1E");
            printf("\n\nIngrese la fila y columna de la primera matriz:\n\n");
            scanf("%d",&m);
            scanf("%d",&n);
            printf("\n\nIngrese la fila y la columna de la segunda matriz:\n\n");
            scanf("%d",&f);
            scanf("%d",&c);
            printf("\n");
            if (n==f)
            {
                printf("\n\nIngrese el valor de la primera matriz:\n\n");
                for (i=1;i<=m;i++)
                for (j=1;j<=n;j++)
                {
                    printf("[%d][%d] = ",i,j);
                    scanf ("%d",&matriz1[i][j]);
                }

                printf("\n");
                printf("\n\nIngrese el valor de la segunda matriz:\n\n");
                for (i=1;i<=f;i++)
                {
                    for (j=1;j<=c;j++)
                    {
                        printf(" [%d][ %d] = ",i,j);
                        scanf ("%d",&matriz2[i][j]);
                    }
                }

                for (i=1;i<=m;i++)
                {
                    for (j=1;j<=c;j++)
                   {
                       matriz3[i][j]=0;
                        for (k=1;k<=n;k++)
                        {
                            matriz3[i][j]=matriz3[i][j]+matriz1[i][k]*matriz2[k][j];
                        }
                   }
                }
             printf("\n\nLa multiplicacion de las matrices es:\n\n");
              for (i=1;i<=m;i++)
               {
                   for (j=1;j<=c;j++)
                    {
                        printf(" [%d] ",matriz3[i][j]);
                    }
                    printf("\n\n");
               }

            }
            else
            {
                printf("\n_________________________________________\n");
                printf("Estas matrices no se pueden multiplicar \n");
                printf("debido a que el numero de columnas de la\n");
                printf("matriz 1 es diferente al numero de filas\n");
                printf("de la matriz 2, !Vuelva a intentarlo!   \n");
            }
            getch();
            }
            break;

            case '4':
            Beep(1000,100);
            system("cls");
            {
            system("COLOR 90");
            printf("\n\nDigite el numero de filas de la matriz -> ");
            scanf("%d",&filas);
            printf("\n\nDigite el numero de columnas de la matriz -> ");
            scanf("%d",&columnas);
              for(i = 0;i<filas;i++)
              {
                  for(j = 0;j<columnas;j++)
                  {
                      printf("\n\nIngrese los valores de la matriz[%d][%d]->", i+1, j+1);
                          scanf("%d", &matriz1[i][j]);
                  }
              }
              printf("\n\nMatriz original\n");
              printf("\n");
              for(i = 0;i < filas;i++)
                {
                  printf("\n");
                  for(j = 0;j < columnas;j++)
                    {
                      printf(" [%d] ", matriz1[i][j]);
                    }
              }
              printf("\n\nMatriz transpuesta\n");
              printf("\n");
              for(i = 0;i < columnas;i++)
            {
                  printf("\n");
                  for(j = 0;j<filas;j++)
                    {
                      printf(" [%d] ", matriz1[j][i]);
                    }
                printf("\n");
            }
            getch();
            }
           break;

            case '5':
                Beep(1000,100);
                system("COLOR 07");
                printf("\nGracias por utilizar el programa\n");
                printf("\nDESARROLLADO POR CARLOS ANDRES ESTRADA VASQUEZ\n");
                printf("\nANDREW HACKS.INC\n");
                printf("\n2017/2018\n");
                getch();
            break;

   }
    printf("\n");
    system("pause");
    }while(p!='5');

    return 0;
}
char menu()
{
    char opc;
    system("cls");
    {
    system("COLOR F0");
    printf("\n\t\tPrograma De Resolucion de Matrices\n");
    printf("\n1. Suma de Matrices\n");
    printf("\n2. Resta de Matrices\n");
    printf("\n3. Multiplicacion de Matrices\n");
    printf("\n4. Transpuesta de una Matriz\n");
    printf("\n5. Salir\n");
    printf("\nElija su opcion -> ");
    getch();
    }
    opc=getch();
    return opc;
}
void sumar(int a[50][50],int b[50][50],int filas,int columnas)
{
	int suma[filas][columnas],i,j;

	for(i=0;i<filas;i++)
	{
		for(j=0;j<columnas;j++)
        {
			suma[i][j] = a[i][j] + b[i][j];
		}
	}

	for(i=0;i<filas;i++)
        {
		for(j=0;j<columnas;j++)
		{
			printf(" [%i] ",suma[i][j]);
		}
		printf("\n\n");
	}

}
void restar(int a[50][50],int b[50][50],int filas,int columnas)
{
	int resta[filas][columnas],i,j;

	for(i=0;i<filas;i++)
	{
		for(j=0;j<columnas;j++)
        {
			resta[i][j] = a[i][j] - b[i][j];
		}
	}

	for(i=0;i<filas;i++)
        {
            for(j=0;j<columnas;j++){
			printf(" [%i] ",resta[i][j]);
		}
		printf("\n\n");
	}

}






