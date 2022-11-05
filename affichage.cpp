//---------------------------------------------------------
// Demo           : affichage
// Fichier        : affichage.cpp
// Version        : 01 - 2022-09-05
// Auteur(s)      : Sangnakkara Julia && Nicolas Sonnard
// But            : ce fichier ne contient uniquement les
//                  déclarations mises à disposition par la librairie
//
//                  Librairie permettant l'affichage des diferents
//                  elements du programme.
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <cstdlib>
#include "affichage.hpp"
#include "date.hpp"
#include <iostream>

// prototype des fonctions



using namespace std;



/************************************************************
*
*      fct renvoie le nom d'un mois
*      la fonction renverra un boolean savoir si cela c'est
*      bien passe.
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
*      et qui invite l'utilisateur a entrer une valeur
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
*      et qui invite l'utilisateur a entrer une valeur
*
* @param void
* @param void
*
***********************************************************/
void msg_explications(void) {
   cout << "Veuillez entrer une valeur situee entre 1800 et 2100" << endl;
}

/************************************************************
*
*      fct qui affiche un message d'erreur en cas de saisie
*      non valide par l'utilisateur.
*
* @param void
* @param void
*
***********************************************************/
void  msg_erreur_saisie(void) {
   cout  << "Erreur, veuillez saisir une date entre 1800 et 2100."  << endl;
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
*      fct qui affiche le calendrier d'une annee donnee,
*      tous les mois, annee bissextile ou non, les dates
*      alignees avec les jours.
*
* @param int
*
***********************************************************/
void affichage_calendrier(const int& annee_calendrier) {

   // init du premier jour de l'annee (1 er janvier)
   int premier_jour_mois = premier_jour_janvier(annee_calendrier);
   int nb_jour_par_mois;
   int j = 1, k ;

   int numero_mois = 1;
   while (numero_mois <= 12) {

      nbJoursMois(numero_mois, annee_calendrier, nb_jour_par_mois);

      nomMois(numero_mois);
      cout << " L  M  M  J  V  S  D" << endl;

      for (k = 1 ; k <= 7 && j <= nb_jour_par_mois; ++k) {
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
      cout << endl ;
      premier_jour_mois = k;
      ++numero_mois;
      k = 1;
      j = 1;
   }
}