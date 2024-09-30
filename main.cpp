#include <iostream>
#include <cmath>

int main() {

    int radiuss;
    float circleArea;

    printf("Enter input data:\n\n");
    printf("Circle radiuss (cm) -> \033[1m");
    scanf("%i", &radiuss);
    printf("\033[0m\n");

    circleArea = M_PI * (radiuss * radiuss);

    printf("Area of the circle is %.4f sq.cm\n", circleArea);

    return 0;
 
}
