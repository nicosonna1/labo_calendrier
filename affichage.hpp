//---------------------------------------------------------
// Demo           : affichage
// Fichier        : affichage.hpp
// Version        : 01 - 2022-09-05
// Auteur(s)      : Sangnakkara Julia && Sonnard Nicolas
// But            : declaration de la librairie date
//
//                  Librairie permettant l'affichage des differents
//                  elements du programme.
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#ifndef INCLUDES_AFFICHAGE_H
#define INCLUDES_AFFICHAGE_H

// prototype des fonctions

void msg_bienvenue(void);
void msg_explications(void);
void msg_erreur_saisie(void);
void affichage_calendrier(const int& annee_calendrier);
void msg_menu_quitter_prg(void);

#endif