//
// Created by melji on 2025-10-01.
//
#include "gtest/gtest.h"
#include "vecteur.h"

TEST (vecteur, constructeur_vide) {
    vecteur v ;
    EXPECT_EQ (0,v.taille() ) ;
}
TEST ( vecteur, inserer_vide_taille_1) {
    vecteur v;
    v.inserer(0, 42);
    EXPECT_EQ (1, v.taille() ) ;
}
