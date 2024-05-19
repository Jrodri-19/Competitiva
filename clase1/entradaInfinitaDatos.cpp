#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Introduce datos (Ctrl+D para terminar en Linux/Mac, Ctrl+Z en Windows):" << std::endl;

    while (std::cin >> input) {
        std::cout << "Leíste: " << input << std::endl;
    }

    std::cout << "Fin de la entrada." << std::endl;
    return 0;
}