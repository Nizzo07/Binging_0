#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i, pos = 5;
    char mov;
    int keypad[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    if(scanf("%d", &n) != 1){
        return 1;
    }
    for(i = 0; i < n; i++){
        pos = 5
        if(scanf("%c %c %c %c", &mov) != 4)
        {
            return 4;
        }
    if(mov == 'B')
    pos = pos - 3;
    else if(mov == 'C')
    pos = pos + 3;
    else if(mov == 'D')
    pos = pos + 1;
    else if(mov == 'E')
    pos = pos - 1;
    }
    
    printf("%d\n", keypad[(pos-1)/3][(pos-1)%3]);

    return 0;
}
