#include <iostream>

int main() {
    int a; // declaration for variable а of type int
    int res; // declaration for variable res of type int
    printf("Enter number: "); // text "Enter number: " output
    scanf("%i", &a); // waiting for user to enter integer number. Number then is
    // stored in variable а
    res = a * a; // calculate square of variable a value. Result is then stored in
    // variable res
    printf("Square of %i is %i\n", a, res); // output the result

    return 0;
 
}
