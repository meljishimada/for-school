//
// Implementation du vecteur
//

#include "vecteur.h"
#include <stdexcept>   // pour std::out_of_range
#include <algorithm>   // pour std::copy

// creation du constructeur ( Qui dit constructeur dit liste d'initialisation)

vecteur::vecteur() : adresse(new int[5]), cardinal (0) {
};

size_t vecteur::taille() const {
    return cardinal ;
}
