#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

 {
    int n, c = 5;
    char keypad [3][3] = {{1,2,3},{4,5,6},{7,8,9}};

   if(scanf("%d", &n) != 1){
      return 1;
   }

   for(int i = 0; i < n; i++)
   {
      for(int j = 0; j < i; j++)
      {
         printf("%c", keypad[i][j]);
      }
   }

   printf("    ")


    return 0;
 }



