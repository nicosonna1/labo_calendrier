//---------------------------------------------------------
// Demo           : date
// Fichier        : date.cpp
// Version        : 01 - 2022-09-05
// Auteur(s)      : Sangnakkara Julia && Sonnard Nicolas
// But            : Declaration de la libraire date
//                  Librairie permettant la manipulation des dates
//
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#ifndef INCLUDES_DATE_H
#define INCLUDES_DATE_H
#include <cstdlib>

// prototype des fonctions

bool       estBissextile(const int& annee_calendrier);
int        nbJoursMois(int& numero_mois, const int& annee_calendrier, int& totalJours);
unsigned int premier_jour_janvier(const int& annee);

#endif
