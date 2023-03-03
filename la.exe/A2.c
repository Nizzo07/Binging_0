#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, carta;
    int xs = 0, ys = 0;
    if (scanf("%d\n", &n) != 1)
    {
        return 1;
    }

    for (int i = 0; i < n; i++)

        if (scanf("%d", &carta) != 1 && carta <= 78 && carta > 0) abort ();


            switch (carta % 4)
            {
            case 0:
             xs = xs + 1;
                break;

                case 1:
                 ys = ys - 1;
                break;

                case 2:

                ys = ys + 1;
                break;

                default:

                xs = xs - 1;
                

            }

                printf("%d %d\n", xs, ys);

                return 0;
            }

        