#include <stdio.h>
#include <conio.h>
void  main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Multiplication table of %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    getch();
}
