#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 void CalculadoraS () {

double n1, n2;
char operator;

     
    printf("Enter an operator(+,-,/,*): ");
    scanf("%c", &operator);

    printf("Enter two numbers to operate: ");
    scanf("%lf %lf",&n1,&n2);
    

    	   
        switch (operator)
        {
            case '+':
                       printf("%lf + %lf = %lf", n1, n2, n1 + n2);
            break;  
            
            case '-': 
                        printf("%lf - %lf = %lf", n1, n2, n1 - n2);
            break;            
            
            case '*': 
                        printf("%lf * %lf = %lf", n1, n2, n1 * n2);
            break;            
            
            case '/':
                        printf("%lf / %lf = %lf", n1, n2, n1/n2);
            break;      

 default:
                        printf("Error! Incorrect operator!!");

        }
    return 0; 
}




void ODDEVEN () {

int num;
printf("Enter an integer: ");
scanf("%d",&num);
if (num % 2 == 0) 
            printf("Its even\n");
      else
             printf("Its odd\n");

}



    void ConsoantVowell () {

        char x;
        char c;
        char v;

        printf("Enter a letter: ");
        scanf("%c",&x);

        if(x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') printf("Its a vowell");
            else printf("Its a cosoant");
            

    }   


    void Biggerof3 () {

        float x, y, z;

        printf("Enter three different numbers: ");
        scanf("%f %f %f",&x,&y,&z);

        if(x >= y && x > z) printf("%f", &x);
        
        else if (y >= x && y >= z) printf("%f",&y);

        else if (z >= x && z >= y) printf("%f",&z);
    



    }

    void LeapYear () {

        int x;
        printf("Enter a year: ");
        scanf("%d",&x);

       // if (x % 100 == 0) printf("The year %d is not a leap year",&x); ??

        if (x % 4 == 0) printf("The year %d is a leap year",&x);
        
        else printf("The year %d is not a leap year",&x);


    }

     void NegativePositiveorNull () {

        int x;
        printf("Enter a number: ");
        scanf("%d",&x);

        if(x > 0) printf("%d is a positive number",&x);
            else if(x < 0) printf("%d is a negative number",&x);
                else printf("%d is null/0",&x);



     }


    void Alphabetornein () {

        char a;
        printf("Enter a letter from the alphabet: ");
        scanf("%c",&a);
        
        if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) 
            printf(" %c is a letter from the alphabet :)",a);

            else printf(" %c is not the letter from the alphabet :(",a);




    }

    void sum () {

        int n, i, sum = 0;

        
        printf("Enter the first number to sum: ");
        scanf("%d",&n);

        printf("Enter the second number to sum with the first: ");
        scanf("%d",&i);

    for(i = 1; i >= n; ++i) {
        sum = sum + i;

    }      

    printf("Sum %d = ",sum);

    }

    void factorial () {

        int i, n;
        
        unsigned long long fact = 1;
        
        printf("Enter an integer: ");
        
        scanf("%d",&n);

        if(n < 0) printf("Error. Not possible with a negative integer.");
            
            else {
                
                for(i = 1; i <= n; ++i) {
                    
                    fact = fact * i;

                }
                
                printf("Factorial of %d = %llu", n, fact);         
           }
                      }

        void multb () {

            int x;
            printf("Enter an Integer: ");
            scanf("%d", &x);

            for(int i = 1; i <= 10; ++i) {

                printf("%d * %d = %d \n", x, i, x * i);

            }
        }

        void fibo () {
            //Fibonachi sequence = 0,1,1,2,3,5,8,13,21,34,55(...)

        int i, n;
        int t1 = 0, t2 = 1;
        int nextTerm = t1 + t2;

        printf("Enter the numbers of terms: ");
        scanf("%d",&n);

        printf("Fibonachi series: %d %d ",t1, t2);

        for(i = 3; i <= n; ++i) 
        {
        
        printf("%d, ", nextTerm);
        
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;

        }

        }

    
    void GCD (){

        int n1, n2;
        printf("Enter two positive numbers: ");
        scanf("%d %d", &n1, &n2);

       do {
        if (n1 > n2) n1 = n1 - n2;
            else n2 = n2 - n1;
       } while (n1 != n2);

       printf("GCD is %d ", n1);
    }

    void CountNum () {

        long long n;
        int count = 0;

        printf("Enter an Integer: ");
        scanf("%lld", &n);

        do {
            n = n / 10;
            ++count;

        } while (n != 0);

        printf("The number of the digits are %d", count);

    }

    void ReverseNum () {

        int n, remainder, reverse = 0;

        printf("Enter an Integer: ");
        scanf("%d", &n);

        while(n != 0) {

            remainder = n % 10;  
            reverse = reverse * 10 + remainder;
            n = n / 10;

        } 

        printf("Reverse number is %d ", reverse);

    }

    void powerofNum () {

        double base, exp, result;

        printf("Enter a base: ");
        scanf("%lf", &base);

        printf("Enter an expoent: ");
        scanf("%lf", &exp);

        result = pow(base, exp);

        printf("%.1lf^%.1lf = %.2fd", base, exp, result);

    }

      
        void pyramid1 () {

            int i, j, rows;
            printf("Enter the number of rows: ");
            scanf("%d", &rows);

            for (i = 1; i <= rows; ++i) {

                for (j = 1; j <= i; ++j)
                     printf("* ");
            
            }
                 printf("\n");
            



        }


int main () {

   pyramid1();

    return 0;

 }           



