#include "Vecteur.hpp"

// Constructeurs
Vecteur::Vecteur() : x(0), y(0) {}
Vecteur::Vecteur(float px, float py) : x(px), y(py) {}
Vecteur::Vecteur(const Point2D& A, const Point2D& B) {
    x = B.x - A.x;
    y = B.y - A.y;
}

// Méthodes
void Vecteur::afficher() const {
    cout << "(" << x << "," << y << ")";
}

// Opérateurs
Vecteur Vecteur::operator+(const Vecteur& v) const {
    return Vecteur(x + v.x, y + v.y);
}
Vecteur Vecteur::operator*(float k) const {
    return Vecteur(x * k, y * k);
}
bool Vecteur::operator==(const Vecteur& v) const {
    return (x == v.x && y == v.y);
}

int main() {
    Point2D A(1, 2), B(4, 6);
    Vecteur v1(A, B);     // vecteur AB = (3,4)
    Vecteur v2(1, 1);

    Vecteur v3 = v1 + v2;
    Vecteur v4 = v1 * 2;

    v1.afficher(); cout << endl;
    v3.afficher(); cout << endl;
    v4.afficher(); cout << endl;

    cout << (v1 == v2) << endl;
}