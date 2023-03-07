#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int n;
  int posicao = 5;
  char mov;

  if(scanf("%d",&n) != 1)
  {
    return 1;
  }
    for(int i = 0; i < n; i++)
    {
        if(scanf("%c",&mov) != 1)
        {
            return 1;
   

    }


    return 0;
}
