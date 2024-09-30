#include <iostream>
#include <cmath>

int main() {
    double z1;
    double z2;
    double alfa;
    char measureUnit;

    std::cout << "Please select angle measurement unit!" << std::endl;
    std::cout << "Type \"r\" for radians or type \"d\" for degrees: ";
   
    while (true) {
        std::cin >> measureUnit;
        if (measureUnit == 'r' || measureUnit == 'd') {
            break;
        } else {
            std::cout << "Invalid input, type \"r\" or \"d\"" << std::endl;
        }
    }

    std::cout << "Enter angle value: ";
    std::cin >> alfa;
    if (measureUnit == 'd') {
        alfa = alfa * (M_PI / 180.0);
    }

    z1 = (sin(alfa * 4) / (1 + cos(alfa * 4))) * (cos(2 * alfa) / (1 + cos(2 * alfa)));

    z2 = 1 / tan((3.0 / 2.0 * M_PI) - alfa);

    std::cout << std::endl << "z1 value is: " << z1 << std::endl;
    std::cout << "z2 value is: " << z2 << std::endl;

    return 0;
 
}
