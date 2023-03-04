#include <stdio.h>
#include <stdlib.h>

int main() {

    int cartas;
    int n;
    int  x = 0, y = 0;

//Numero de vezes vai ser possivel meter o input do utilizador
    if(scanf("%d",&n) != 1) abort();

    for ( int i = 0; i < n;i++ )
    {
        //Os numeros recebidos se o resto deles na divisao entre o mesmo e o 4 for um dos casos o x vai subir ou descer assim como o y
        if(scanf("%d",&cartas) != 1) abort();
    
        switch(cartas % 4){
            case 0:
            x = x+1;
            break;

            case 3:
            x = x -1;
            break;

            case 2:
            y = y + 1;
            break;

            case 1:
            y = y - 1;
            break;
        }
    }

        printf("%d %d\n", x, y);

        return 0;
}