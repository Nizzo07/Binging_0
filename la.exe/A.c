#include <stdio.h>
#include <stdlib.h>
int main()
{

    int num_soldado = 1;   // número do soldado com mais biscoitos
    int max_biscoitos = 0; // número máximo de biscoitos encontrados

    // ler o número de biscoitos de cada soldado e atualizar os valores das variáveis num_soldado e max_biscoitos
    for (int i = 1; i <= 5; i++)
    {
        int num_biscoitos;
        if(scanf("%d", &num_biscoitos) != 1){
            printf("Error");
            return 1;
        }

        if (num_biscoitos > max_biscoitos)
        {
            max_biscoitos = num_biscoitos;
            num_soldado = i;
        }
    }

    // imprimir o número do soldado com mais biscoitos
    printf("%d\n", num_soldado);

    return 0;
}

