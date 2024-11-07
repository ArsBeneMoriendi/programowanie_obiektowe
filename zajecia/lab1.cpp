#include <iostream>

int main()
{
    std::cout << "Podaj nazwe pliku: ";
    std::string fileName;
    std::cin >> fileName;

    std::cout << "\nNazwa pliku: " << fileName;
    std::cout << "\nMiejsce kropki: " << fileName.find('.');

    return 0;
}
