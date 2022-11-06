//---------------------------------------------------------
// Demo           : main
// Fichier        : main.cpp
// Version        : 01 - 2022-11-06
// Auteur(s)      : Sangnakkara Julia && Nicolas Sonnard
// But            : Programme qui permet a un utilisateur
//                  d'afficher le calendrier de l annee
//                  de son choix, entre l'an 1800 et 2100
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include "affichage.hpp"
#include "saisie.hpp"
#include "date.hpp"

int main() {

   int annee_calendrier;

   msg_bienvenue();

   do {
      msg_explications();
      saisie_annee_calendrier(annee_calendrier);
      affichage_calendrier(annee_calendrier);
      if (menu_quitter())
         return EXIT_SUCCESS;
   } while (true);
}