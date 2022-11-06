//---------------------------------------------------------
// Demo           : affichage
// Fichier        : affichage.cpp
// Version        : 01 - 2022-09-05
// Auteur(s)      : Sangnakkara Julia && Nicolas Sonnard
// But            : ce fichier contient les
//                  declarations mises à disposition par la librairie
//
//                  Librairie permettant l'affichage des differents
//                  elements du programme.
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include "affichage.hpp"
#include "date.hpp"
#include <iostream>

#define ANNEE_MIN 1800
#define ANNEE_MAX 2100

using namespace std;

/************************************************************
*
*      fct qui affiche le nom d'un mois dont le numero
*      a ete passe en parametre par reference
*
*
* @param annee_calendrier
* @param string
*
***********************************************************/
void nomMois(const int& numero_mois) {

   switch (numero_mois) {
      case 1  : cout << "Janvier"   << endl; break;
      case 2  : cout << "Fevrier"   << endl; break;
      case 3  : cout << "Mars"      << endl; break;
      case 4  : cout << "Avril"     << endl; break;
      case 5  : cout << "Mai"       << endl; break;
      case 6  : cout << "Juin"      << endl; break;
      case 7  : cout << "Juillet"   << endl; break;
      case 8  : cout << "Aout"      << endl; break;
      case 9  : cout << "Septembre" << endl; break;
      case 10 : cout << "Octobre"   << endl; break;
      case 11 : cout << "Novembre"  << endl; break;
      case 12 : cout << "Decembre"  << endl; break;
   }
}

/************************************************************
*
*      fct qui affiche un message de bienvenue
*      et qui invite l'utilisateur a saisir l'annee
*      pour laquelle il souhaiterait afficher le calendrier
*
* @param void
* @param void
*
***********************************************************/
void  msg_bienvenue(void) {
   cout  << "Bonjour, bienvenue dans notre calculateur de calendrier"	     << endl;
   cout  << "Saisissez une annee dont vous souhaitez afficher le calendrier" << endl;
}

/************************************************************
*
*      fct qui affiche un message de bienvenue
*      et invite l'utilisateur a entrer une valeur
*
* @param void
* @param void
*
***********************************************************/
void msg_explications(void) {
   cout << "Veuillez entrer une valeur situee entre " << ANNEE_MIN << " et " << ANNEE_MAX << endl;
}

/************************************************************
*
*      fct qui affiche un message d'erreur
*     en cas de saisie non valide
*
* @param void
* @param void
*
***********************************************************/
void  msg_erreur_saisie(void) {
   cout  << "Erreur, veuillez saisir une date entre " << ANNEE_MIN << " et " << ANNEE_MAX << endl;
}

/************************************************************
*
*      fct qui affiche un message demandant a l'utilisateur
*      s'il/elle souhaite afficher un nouveau calendrier ou
*      ou quitter le programme.
*
* @param void
* @param void
*
***********************************************************/
void msg_menu_quitter_prg(void) {
   cout  << "Voulez-vous afficher un autre calendrier ?" << endl
         << "[ O / N ] ?"                                << endl;
}

/************************************************************
*
*      fct qui affiche le calendrier entier d'une annee donnee,
*      les dates sont affichees sous le jour correspondant.
*
* @param int
*
***********************************************************/
void affichage_calendrier(const int& annee_calendrier) {

   // init du premier jour de l'annee (1 er janvier)
   int premier_jour_mois = premier_jour_janvier(annee_calendrier);
   int nb_jour_par_mois;


   cout << premier_jour_mois << endl;


   int numero_mois = 1;
   while (numero_mois <= 12) {

      nbJoursMois(numero_mois, annee_calendrier, nb_jour_par_mois);

      nomMois(numero_mois);
      cout << " L  M  M  J  V  S  D" << endl;

      int j = 1, k = 1;
      for (; k <= 7 && j <= nb_jour_par_mois; ++k) {
         for (; premier_jour_mois > 1; --premier_jour_mois) {
            cout << "   ";
            ++k;
         }
         if (j < 10)
            cout << " ";
         cout << j++;

         if (k != 7) {
            cout << " ";
         }
         else {
            k = 0;
            cout << endl;
         }
      }
      cout << endl << endl;
      premier_jour_mois = k;
      ++numero_mois;
   }
}