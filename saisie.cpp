#ifndef SAISIE_HPP
# define SAISIE_HPP
# include "saisie.hpp"
#endif //SAISIE_HPP

#ifndef AFFICHAGE_HPP
# define AFFICHAGE_HPP
# include "affichage.hpp"
#endif //AFFICHAGE_HPP

#ifndef DATE_HPP
# define DATE_HPP
# include "date.hpp"
#endif //DATE_HPP

#include <limits>
#include <cstdlib>
#include <iostream>

using namespace std;

/************************************************************
*
*      Fct qui remet a zero les flags d'erreur du flux cin
*       et vide le buffer de saisie
*      Renvoie EXIT_SUCCESS en cas de succes,
*      EXIT_FAILURE Si le nettoyage a echoue
*
* @param void
***********************************************************/
bool nettoyage_flux(void) {
   cin.clear(); //changer en cin.fail?
   return EXIT_SUCCESS;
}


/************************************************************
*
*      Fct qui stocke une annee entree par l'utilisateur.
*      Si l'utilisateur rentre une donnee invalide ou une
*      annee hors de l'intervalle [1800;2100], le flux est
*      nettoye, le buffer de saisie vide et l'utilisateur
*      doit saisir une nouvelle valeur.
*
* @param void
***********************************************************/
bool saisie_annee_calendrier(int& annee_calendrier) {

   bool ctrl_erreur;

   do {
      ctrl_erreur = not(cin >> annee_calendrier)
         || annee_calendrier < 1800 || annee_calendrier > 2100; //Faudra faire des constantes
      if (ctrl_erreur) {
         msg_erreur_saisie();
         nettoyage_flux(); }

      cin.ignore(numeric_limits<streamsize>::max(), '\n');

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
      else    { msg_erreur_saisie(); nettoyage_flux(); }
   } while (ctrl_erreur);

   return EXIT_FAILURE;
}