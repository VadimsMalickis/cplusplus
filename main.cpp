#include <iostream>

int main() {
    int rectSideA;
    int rectSideB;
    std::cout << "Enter input data: \n\n";
    std::cout << "Rectangle width (cm) -> \033[1m";
    std::cin >> rectSideA;
    std::cout << "\033[0mRectangle height (cm) -> \033[1m";
    std::cin >> rectSideB;
    std::cout << "\033[0m\n";
    std::cout << "Area of the rectangle is " << rectSideA * rectSideB << " sq.cm" << std::endl;

    return 0;
 
}
