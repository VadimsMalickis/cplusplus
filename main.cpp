#include <iostream>
#include <cmath>

int main() {
    double z1;
    double z2;
    double inputInt;

    std::cout << "Enter you number: ";
    std::cin >> inputInt;

    z1 = (sin(inputInt * 4) / (1 + cos(inputInt * 4))) * (cos(2 * inputInt) / (1 + cos(2 * inputInt)));

    z2 = 1 / tan((3.0 / 2.0 * M_PI) - inputInt);

    std::cout << std::endl << "z1 value is: " << z1 << std::endl;
    std::cout << "z2 value is: " << z2 << std::endl;

    return 0;
 
}
