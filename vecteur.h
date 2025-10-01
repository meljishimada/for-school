//
// Created by melji on 2025-09-30.
//

#ifndef VENDREDI_VECTEUR_H
#define VENDREDI_VECTEUR_H

#include <cstddef>  // pour size_t

class vecteur {
private:
    int*   adresse;    // pointeur vers le tableau dynamique
    size_t taille;     // nombre d'éléments utilisés
    size_t capacite;   // espace alloué

public:
    // Constructeurs / destructeur
    vecteur();                        // vecteur vide
    explicit vecteur(size_t n, int v=0); // vecteur de n valeurs identiques
    vecteur(const vecteur& other);    // constructeur de copie
    vecteur& operator=(const vecteur& other); // opérateur d'affectation
    ~vecteur();                       // destructeur

    // Accesseurs
    size_t size() const;              // retourne le nombre d'éléments
    int& operator[](size_t i);        // accès lecture/écriture
    const int& operator[](size_t i) const; // accès lecture seule

    // Méthodes
    void push_back(int valeur);       // ajoute un élément à la fin
};

#endif // VENDREDI_VECTEUR_H
