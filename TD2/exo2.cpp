#include <iostream>

int main() {
    int n;
    std::cout << "Donnez un nombre entre 1 et 10, j'afficherai sa table de multiplication" << std::endl;
    std::cin >> n;

    for (int i = 1; i <= 10; i++) {
        std::cout << n << " x " << i << " = " << n * i << std::endl;
    }

    return 0;
}


