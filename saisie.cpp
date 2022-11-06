//---------------------------------------------------------
// Demo           : saisie
// Fichier        : saisie.cpp
// Version        : 01 - 2022-11-06
// Auteur(s)      : Sangnakkara Julia && Sonnard Nicolas
// But            : saisie et controle des donnees entrees
//                  par l'utilisateur
//
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include "saisie.h"
#include "affichage.h"

#include <limits>       // numeric_limits
#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin

using namespace std;

/************************************************************
*
*      Fct qui remet a zero les flags d'erreur du flux cin
*      et nettoye le buffer de saisie jusqu'a '\n'
 *
* @param void
***********************************************************/
 void nettoyage_flux(void) {
   cin.clear();
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
}


/************************************************************
*
*      Fct qui stocke une annee entree par l'utilisateur.
*      S'il/elle rentre une donnee non valide ou une
*      annee hors de l'intervalle [1800;2100], le flux est
*      nettoye, le buffer de saisie vide, et l'utilisateur
*      doit saisir une nouvelle valeur.
*
* @param void
***********************************************************/
bool saisie_annee_calendrier(int& annee_calendrier) {

   const int ANNEE_MIN = 1800,
             ANNEE_MAX = 2100;
   bool ctrl_erreur;

   do {
      ctrl_erreur = not(cin >> annee_calendrier)
                    || annee_calendrier < ANNEE_MIN || annee_calendrier > ANNEE_MAX;
      if (ctrl_erreur) {
         msg_erreur_saisie();
         nettoyage_flux();
      }

      cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Vide le buffer de saisie

   } while (ctrl_erreur);
   return EXIT_SUCCESS;
}


/************************************************************
*
*      Fct qui permet a l'utilisateur d'afficher un nouveau
*      calendrier ou de quitter le programme.
 *
*      Return EXIT_SUCCESS si l'utilisateur veut relancer
*      l'operation, EXIT_FAILURE s'il/elle desire quitter
*
* @param void
***********************************************************/
bool menu_quitter(void) {

   bool ctrl_erreur;
   char cara_oui_non;

   msg_menu_quitter_prg() ;

   do {
      ctrl_erreur = not(cin >> cara_oui_non)
           || cara_oui_non != 'o'  || cara_oui_non != 'O'
           || cara_oui_non != 'n'  || cara_oui_non != 'N';

      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      if      (cara_oui_non == 'o' || cara_oui_non == 'O') return EXIT_SUCCESS;
      else if (cara_oui_non == 'n' || cara_oui_non == 'N') return EXIT_FAILURE;
      else    { nettoyage_flux(); msg_erreur_saisie_quitter();}

   } while (ctrl_erreur);

   return EXIT_FAILURE;
}