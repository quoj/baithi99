#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int isEvenNumber(int number);

int main() {
    int n, m, i;
    printf("Vui long nhap hai so n < m:\n ");
    printf("+ n: ");
    scanf("%d", &n);
    printf("+ m: ");
    scanf("%d", &m);

    printf("Cac so chan giua %d va %d:\n", n, m);
    for (i = n + 1; i < m; i++) {
        if (isEvenNumber(i)) { 
            printf("%d\n", i);
        }
    }

    return 0;
}

int isEvenNumber(int number) {
    if (number % 2 == 0) {
        return 1;
    }
    return 0;
}
