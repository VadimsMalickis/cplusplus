#include <iostream>
#include <cmath>

int main() {

    int base;
    int height;
    double triangleArea;

    printf("Enter input data:\n\n");
    printf("Enter base of a triangle: \033[1m");
    scanf("%i", &base);
    printf("\033[0mEnter height of a triangle: \033[1m");
    scanf("%i", &height);
    printf("\033[0m\n");

    triangleArea = 0.5 * base * height;

    printf("Area of the triangle is %.7lf sq.cm\n", triangleArea);

    return 0;
 
}
