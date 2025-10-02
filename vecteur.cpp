//
// Implementation du vecteur
//

#include "vecteur.h"
#include <stdexcept>   // pour std::out_of_range
#include <stdexcept>

// creation du constructeur ( Qui dit constructeur dit liste d'initialisation)

vecteur::vecteur() : adresse(new int[5]), cardinal (0) {
};


size_t vecteur::taille() const {
    return cardinal ;
}// eviter un acces direct a l methode priver

void vecteur::inserer( size_t p_index, int p_nouveau) {
    // Valider l'index

    if (p_index > cardinal) throw std::invalid_argument ("inserer : index hors_limit !") ;
    //tasser chaque element  a la position index
    for (size_t i = cardinal ; i > p_index; --i )  adresse[i] = adresse[i-1];
    adresse[p_index] = p_nouveau;
    ++cardinal;
    // ecrire le nouvel element a la position index
}