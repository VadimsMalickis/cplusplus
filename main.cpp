#include <iostream>

int main() {
    int a;
    int b;
    int res;
    printf("Enter number 1: ");
    scanf("%i", &a);
    printf("Enter number 2: ");
    scanf("%i", &b);

    res = a * a;

    printf("\nSquare of %i is %i\n", a, res);

    printf("%i + %i = %i\n", a, b, a + b);
    printf("%i - %i = %i\n", a, b, a - b);
    printf("%i * %i = %i\n", a, b, a * b);
    printf("%i / %i = %.2f\n", a, b, static_cast<float>(a) / b);

    return 0;
 
}
