#include <iostream>
#include <cmath>

int main() {
    int a;
    int b;
    printf("Enter number 1: ");
    scanf("%i", &a);
    printf("Enter number 2: ");
    scanf("%i", &b);
    printf("\nSquare of %i is %i\n", a, a * a);
    
    printf("%i + %i = %i\n", a, b, a + b);
    printf("%i - %i = %i\n", a, b, a - b);
    printf("%i * %i = %i\n", a, b, a * b);
    printf("%i / %i = %.2f\n", a, b, static_cast<float>(a) / static_cast<float>(b));

    return 0;
 
}
