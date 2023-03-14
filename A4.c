#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // remove o caractere '\n' do buffer

    for (int i = 0; i < n; i++) {
        char word[1001];
        int count = 0;
        while (scanf("%s", word) == 1) {
            count++;
        }
        getchar(); // remove o caractere '\n' do buffer
        printf("%d\n", count);
    }

    return 0;
}


