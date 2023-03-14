#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char line[1001];

    // Lê o número de casos
    fgets(line, 1001, stdin);
    sscanf(line, "%d", &n);

    // Lê as N linhas contendo as palavras
    for (int i = 0; i < n; i++) {
        fgets(line, 1001, stdin);

        // Separa as palavras
        char *token = strtok(line, " ");
        while (token != NULL) {
            printf("%s\n", token);
            token = strtok(NULL, " ");
        }
    }

    return 0;
}
