#include <iostream>
#define multiplier(x,y) ((x) * (y))

int main() {
    int a, b;
    std::cout << "Entrez une valeur :" << std::endl;
    std::cin >> a;
    std::cout << "Entrez une autre valeur :" << std::endl;
    std::cin >> b;
    std::cout << multiplier(a, b) << std::endl;
    return 0;
}
