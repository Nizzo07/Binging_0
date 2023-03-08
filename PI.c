

//  50 QUESTOES

// 1)

void I()
{

    int x;
    int y = 0;

    while (1)
    {

        printf("Enter number: ");

        scanf("%d", &x);

        if (x == 0)
            break;

        if (x > y)
            y = x;
    }

    printf("%d \n", y);

    return 0;
}

// Defina um programa que lˆe (usando a fun¸c˜ao scanf uma sequˆencia de n´umeros inteiros terminada com o n´umero 0 e imprime no ecran a m´edia da sequˆenc
void II()
{

  int x, n, media;

  if(scanf("%d", &n) != 1){
    return 1;
  }

  for(int i = 0; i < n; i++)
  {
    if(scanf("%d", &x) != 1)
    {
        return 1;
    }
    if(x == 0)
    break; 
  
  }

  

    
    
    
    
    
}   
    
    int main()
    {

        II();
    }