#include <stdio.h>
#include <stdlib.h>

int main()
{
// O A é o nú mero de andares, C é o andar em q começou a traquinar, n a qunatidades de vezes q ele subiu ou desceu
    int A;
    int C;
    int n;
    int o;

    if (scanf("%d", &C) != 1)
    {
        return 1;
    }

    if (scanf("%d", &A) != 1)
    {
        return 1;
    }
    if (scanf("%d", &n) != 1)
    {
        return 1;
    }
// loop que me deixa dar input ao numero de vezes q for o n e o o é para meter 1 ou -1
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &o) != 1)
        {
            return 1;
        }
        // sempre que o C for maior q A e o C for maior que 0 fazemos C + o
        if (C < A && C > 0)
            C = C + o;
        // sempre que o C for igual a 0 e o o for igual a 1 fazemos a sua soma
        else if (C == 0 && o == 1)
            C = C + o;
        else if (C == 0 && o == -1)
            C = C + o;
    // quando o C for igual a A no meio dos inputs o C dev manter-se igual ao A e no proximo input deve descer e se for para ser maior q o A deve manter se igual ao A       
        else if( C == A && o == 1)
            C = A;
        else if(C == A && o == -1)
            C = C + o;
        else if(C == 0 && o == -1)
            C = 0;
    }
    printf("%d\n", C);

    return 0;
}