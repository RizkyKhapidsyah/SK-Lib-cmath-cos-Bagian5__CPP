#include <iostream>
#include <cmath>
#include <cerrno>
#include <cfenv>
#include <conio.h>

/*  Source by CPPReference
    Modified For Learn by Rizky Khapidsyah
    I.D.E : VS19 
*/

#pragma fenv_access (on)
const double pi = std::acos(-1);

int main() {
    // typical usage
    std::cout << "cos(pi/3) = " << std::cos(pi / 3) << '\n' << "cos(pi/2) = " << std::cos(pi / 2) << '\n' << "cos(-3*pi/4) = " << std::cos(-3 * pi / 4) << '\n';
    // special values
    std::cout << "cos(+0) = " << std::cos(0.0) << '\n' << "cos(-0) = " << std::cos(-0.0) << '\n';
    // error handling
    std::feclearexcept(FE_ALL_EXCEPT);
    std::cout << "cos(INFINITY) = " << std::cos(INFINITY) << '\n';
    
    if (std::fetestexcept(FE_INVALID))
        std::cout << "    FE_INVALID raised\n";

    _getch();
    return 0;
}