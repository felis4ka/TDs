#ifndef VECTEUR_HPP
#define VECTEUR_HPP

#include <iostream>
#include "Point2D.hpp"
using namespace std;

class Vecteur {
private:
    float x, y;

public:
    // constructeurs
    Vecteur();
    Vecteur(float px, float py);
    Vecteur(const Point2D& A, const Point2D& B);

    // méthodes
    void afficher() const;

    // opérateurs
    Vecteur operator+(const Vecteur& v) const;
    Vecteur operator*(float k) const;
    bool operator==(const Vecteur& v) const;
};

#endif
