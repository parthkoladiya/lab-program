#include <stdio.h>
#include <conio.h>
void  main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    int factorial = 1;
    for ( i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is: %d\n", n, factorial);

    getch();
}
