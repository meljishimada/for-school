//
// Created by melji on 2025-09-30.
//

#ifndef VENDREDI_VECTEUR_H
#define VENDREDI_VECTEUR_H

#include <cstddef>  // pour size_t
using namespace std;

class vecteur {
  public:
    vecteur() ;// constructeur
   size_t taille() const; // la taille du vecteur


  private:
    int* adresse;
    size_t cardinal;

};

#endif // VENDREDI_VECTEUR_H
