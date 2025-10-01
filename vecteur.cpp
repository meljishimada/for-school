//
// Implementation du vecteur
//

#include "vecteur.h"
#include <stdexcept>   // pour std::out_of_range
#include <algorithm>   // pour std::copy

// Constructeur par défaut
vecteur::vecteur() : adresse(nullptr), taille(0), capacite(0) {}

// Constructeur avec taille initiale
vecteur::vecteur(size_t n, int v) : taille(n), capacite(n) {
    adresse = new int[capacite];
    for (size_t i = 0; i < taille; ++i) {
        adresse[i] = v;
    }
}

// Constructeur de copie
vecteur::vecteur(const vecteur& other) : taille(other.taille), capacite(other.capacite) {
    adresse = new int[capacite];
    std::copy(other.adresse, other.adresse + taille, adresse);
}

// Affectation
vecteur& vecteur::operator=(const vecteur& other) {
    if (this != &other) {
        delete[] adresse;
        taille = other.taille;
        capacite = other.capacite;
        adresse = new int[capacite];
        std::copy(other.adresse, other.adresse + taille, adresse);
    }
    return *this;
}

// Destructeur
vecteur::~vecteur() {
    delete[] adresse;
}

// Taille
size_t vecteur::size() const {
    return taille;
}

// Accès lecture/écriture
int& vecteur::operator[](size_t i) {
    if (i >= taille) throw std::out_of_range("Index hors limite");
    return adresse[i];
}

const int& vecteur::operator[](size_t i) const {
    if (i >= taille) throw std::out_of_range("Index hors limite");
    return adresse[i];
}

// Ajout en fin
void vecteur::push_back(int valeur) {
    if (taille == capacite) {
        // doubler la capacité
        size_t new_cap = (capacite == 0 ? 1 : capacite * 2);
        int* nouveau = new int[new_cap];
        for (size_t i = 0; i < taille; ++i) {
            nouveau[i] = adresse[i];
        }
        delete[] adresse;
        adresse = nouveau;
        capacite = new_cap;
    }
    adresse[taille++] = valeur;
}
