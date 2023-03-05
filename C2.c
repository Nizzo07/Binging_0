#include <stdio.h>
#include <stdlib.h>

int main()
{
    // wi - wins Inzel, wc - wins CMD, d - draws
    int n;
    char z, c;
    int wi = 0, wc = 0, d = 0;

    if (scanf("%d", &n) != 1)
    {
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (scanf("%c %c", &z, &c) != 2)
        {
            return 2;
        }
        if (z == '@' && c == '+')

            wi++;

        else if (z == '@' && c == '-')

            wc++;
        
        else if (z == '|' && c == '*')
            
            wi++;
        
        else if (z == '|' && c == '+')
            
            wc++;
        
        else if (z == 'X' && c == '-')
            
            wi++;
        
        else if (z == 'X' && c == '*')
            
            wc++;
        
        else if(z == '@' && c == '*')
            
            d++;
        
        else if(z == '|' && c == '-')
            
            d++;
        
        else if(z == 'X' && c == '+')
           
            d++;
    }

    printf("%d %d %d", wi, wc, d);

    return 0;
}
