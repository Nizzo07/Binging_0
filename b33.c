#include <stdio.h>

int main() {
    int n, i, pos = 5;
    char mov;
    int keypad[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    if(scanf("%d", &n) != 1){
        {
            return 1;
        }
    getchar(); // consumir o caractere de quebra de linha após o número

    for (i = 0; i < n; i++) {
        pos = 5; // reiniciar a posição para o início de cada linha

        while ((mov = getchar()) != '\n') {
            switch (mov) {
                case 'C':
                    if (pos > 3) pos -= 3;
                    break;
                case 'B':
                    if (pos < 7) pos += 3;
                    break;
                case 'E':
                    if (pos % 3 != 1) pos--;
                    break;
                case 'D':
                    if (pos % 3 != 0) pos++;
                    break;
                default:
                    // ignorar caracteres inválidos
                    break;
            }
        }

        printf("%d\n", keypad[(pos-1)/3][(pos-1)%3]);
    }
    }

    return 0;
}
