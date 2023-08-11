#include <iostream>
#include <locale>

int main()
{
    std::cin.imbue(std::locale("en_US"));   // Set INPUT to use the DOT
    std::cout.imbue(std::locale("fr_FR"));  // Set OUTPUT to use a COMMA
    double test;
    std::cout << "Enter a number: ";
    std::cin >> test;
    std::cout << "Number was: " << test << std::endl;
    return 0;
}
