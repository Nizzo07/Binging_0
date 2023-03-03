#include <stdio.h>
#include <stdlib.h>

int main() {

    int cartas;
    int n;
    int  x = 0, y = 0;

    if(scanf("%d",&n) != 1) abort();

    for ( int i = 0; i < n;i++)
    {
        if(scanf("%d",&cartas) != 1) abort();
    
        switch(cartas % 4){
            case 1:
            y--;
            break;

            case 2:
            y++;
            break;

            case 3:
            x--;
            break;

            case 0:
            x++;
            break;
        }
    }

        printf("Poiseção é (%d,%d)\n", x, y);

        return 0;
}