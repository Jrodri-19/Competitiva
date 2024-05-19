#include <bits/stdc++.h>
using namespace std;
int main() {
    //for normal
    for (int i = 0; i < 10; ++i) 
    {
    std::cout << "i = " <<
     i << std::endl;
    }
    //for rango
    std::vector<int> vec = {1, 2, 3, 4, 5};
    for (int val : vec) 
    {
        std::cout << "val = " << val << std::endl;
    }
    //for iterador
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << "val = " << *it << std::endl;
    }
    //for infinito
    for (;;) {
        std::cout << "Este bucle es infinito." << std::endl;
        break; // Usualmente se rompe con una condición específica
    }
    //for con Múltiples Variables
    for (int i = 0, j = 10; i < j; ++i, --j) {
        std::cout << "i = " << i << ", j = " << j << std::endl;
    }
    //sentencia vacia solo condicion
    int i = 0;
    for (; i < 10; ++i) {
        std::cout << "i = " << i << std::endl;
    }
    //sin iniciacion ni incremento
    i=0;
    for (; i < 10;) {
        std::cout << "i = " << i << std::endl;
        ++i;  // El incremento se hace dentro del bucle
    }
    //paso personalizado
    for (int i = 0; i < 20; i += 2) {
        std::cout << "i = " << i << std::endl;
    }
    //contenedor par
    std::map<int, std::string> mapa = {{1, "uno"}, {2, "dos"}, {3, "tres"}};

    for (const auto& par : mapa) {
        std::cout << "Clave: " << par.first << ", Valor: " << par.second << std::endl;
    }
    return 0;
}