#include <iostream>
#include <iomanip>   // pour setw

int main() {
    // On parcourt les lignes (1 à 10)
    for (int i = 1; i <= 10; i++) {
        // On parcourt les colonnes (1 à 9)
        for (int j = 1; j <= 9; j++) {
            std::cout << std::setw(4) << i * j;
        }
        std::cout << std::endl;
    }

    return 0;
}
