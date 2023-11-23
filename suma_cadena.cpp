#include <iostream>
#include <string>

int main() {
    std::string frase1 = "Hola, ";
    std::string frase2 = "mundo!";
    std::string frase3 = frase1 + frase2;
    std::cout << frase3 << std::endl;
    return 0;
}