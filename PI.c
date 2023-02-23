

//  50 QUESTOES

// 1)

void I() {

    int x;
    int y = 0;

    
    while(1){   
        
        printf("Enter number: ");
        
        scanf("%d", &x);
        
        if (x == 0) break;

        if (x > y) y = x;               
    }


    printf("%d \n", y);

    return 0;
}

// Defina um programa que lˆe (usando a fun¸c˜ao scanf uma sequˆencia de n´umeros inteiros terminada com o n´umero 0 e imprime no ecran a m´edia da sequˆenc
void II () {

    int x;
    int y;
    int media;


        do {
            printf("Enter a number: ");
            scanf("%d",&x);
            media = ((x + y) / 2);

                if (x != 0) break;
                
        } while(x != 0);

        printf("The value is %d", x);
    }











int main()
{

    II();
}