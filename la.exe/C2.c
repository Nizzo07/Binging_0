#include <stdio.h>
#include <stdlib.h>

int main()
{

    int abx, ord;
    int x = 0, y = 0;
    for (int i; i < 5; i++)
    {

        if (scanf("%d", &abx) != 1)
        {
            return 1;
        }

        if (scanf("%d", &ord) != 1)
        {
            return 1;
        }
    }
    if (ord % 2 = 0)
        y = ord + y;

    else if (ord % ord = 1)
        y = ord + y;

    if (abx % 4 = 0)
        x = abx + x;
    else if (abx % abx = 1)
        x = abx + x;

    printf("%d %d", abx, ord);

    return 0;
}