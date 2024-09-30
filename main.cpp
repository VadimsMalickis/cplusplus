#include <iostream>

int main() {
    int a;
    int b;
    int res;
    std::cout << "Enter number 1: ";
    std::cin >> a;
    std::cout << "Enter number 2: ";
    std::cin >> b;

    res = a * a;

    std::cout << std::endl << "Square of " << a << " is " << res << std::endl;

    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    std::cout << a << " * " << b << " = " << a * b << std::endl;

    double devisionRes = static_cast<float>(a) / b;
    std::cout << a << " / " << b << " = " << devisionRes << std::endl;

    return 0;
 
}
