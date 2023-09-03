#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()
    {
        srand(time(0));
        int numeros[15]; //Variables a usar 
        int contador=0;
        int suma=0;
        while(contador < 15) //en este while se rellena el arreglo numeros
        {
            numeros[contador] = rand() %25 +1;
            contador = contador + 1 ;
        }
        contador =0 ;
        printf("El arreglo es: ");
        for(int i= 0;i < 15; i++) //se imprime el arreglo numeros
        {
            printf("%i ",numeros[i]);      
        }
        printf("\n");
        for(int j= 0;j < 15; j++) // se usa un for anidado para recorer el arreglo y para sacar los divisores de cada numero
        {
            for(int i= 1;i < numeros[j]; i++)
            { 
                if(numeros[j] % i == 0)
                {
                    suma = suma + i ;
                }
            }
            printf("\n");
        if(suma > numeros[j]) // se evalua la variable suma y se imprime el resultado
        {
            printf("%i - Abundante",numeros[j]);
        }
        else if (suma <numeros[j])
        {
            printf("%i - Deficiente",numeros[j]);
        }
        else 
            printf("%i - Perfecto",numeros[j]);

        suma =0;
        printf("\n");    
        }      
        return 0 ;
        



    }
