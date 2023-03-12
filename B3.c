#include <stdio.h>

int main() {
    // keypad representado como uma matriz de caracteres
    char keypad[3][3] = {{'7', '8', '9'},
                         {'4', '5', '6'},
                         {'1', '2', '3'}};

    // posição inicial do utilizador
    int current_row = 1;
    int current_col = 1;

    // número de linhas de comandos a serem lidas
    int n;
    if(scanf("%d\n", &n) != 1){
      return 1;
    }

    // ler as linhas de comandos e atualizar a posição do utilizador
    for (int i = 0; i < n; i++) {
        char commands[21];
        if(scanf("%s\n", commands) != 1){
         return 1;
        }

        for (int j = 0; commands[j] != '\0'; j++) {
            switch (commands[j]) {
                case 'C':
                    if (current_row > 0) {
                        current_row--;
                    }
                    break;
                case 'B':
                    if (current_row < 2) {
                        current_row++;
                    }
                    break;
                case 'D':
                    if (current_col < 2) {
                        current_col++;
                    }
                    break;
                case 'E':
                    if (current_col > 0) {
                        current_col--;
                    }
                    break;
            }
        }
        printf("%c\n", keypad[current_row][current_col]);
    }
     

    return 0;
}
