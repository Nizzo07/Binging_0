#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, y, z;

    if(scanf("%d", &x) != 1){
        printf("Erro\n");
        return 1;
    };
    if(scanf("%d", &y)!= 1){
        printf("Erro\n");
        return 1;
    };

    if(scanf("%d", &z) != 1){
        printf("Erro\n");
        return 1;
    };

    if ((y > x && y > z) || (y < x && y < z))
        printf("NAO\n");
    else
        printf("OK\n");

    return 0;
}