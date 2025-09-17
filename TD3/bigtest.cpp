#include <iostream>
#include <string>

class Quadrupede {
protected :
    std::string nom;

public:
    Quadrupede(const std::string& n) : nom(n) {}  

    std::string getNom() const { return nom; }   
    void setNom(const std::string& n) { nom = n; } 
};

class Chat : public Quadrupede {
    // dérivé de Quadrupede
};

class Chien : public Quadrupede {
    // dérivé de Quadrupede
};