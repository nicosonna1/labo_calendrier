#ifndef AFFICHAGE_HPP
#define AFFICHAGE_HPP
//#define cin.ignore(numeric_limits<streamsize>::max(), '\n') VIDER_BUFFER
#include "affichage.hpp"
#endif //AFFICHAGE_HPP

#ifndef DATE_HPP
#define DATE_HPP
//#define cin.ignore(numeric_limits<streamsize>::max(), '\n') VIDER_BUFFER
#include "date.hpp"
#endif //DATE_HPP

using namespace std;

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
   cout  << "Erreur, veuillez recommencer."  << endl;
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
* @param bool
*
***********************************************************/
bool affichage_calendrier(const int& annee_calendrier) {

   int premier_jour_mois = 3; //output fct premier_jour_du_mois (de janvier) fictive
   int nb_jour_par_mois;
   int j = 1, k = 1;

   int numero_mois = 1;
   while (numero_mois <= 12) {

      nbJoursMois(numero_mois, annee_calendrier, nb_jour_par_mois);

      nomMois(numero_mois);
      cout << " L  M  M  J  V  S  D" << endl;
      for (; k <= 7 && j <= nb_jour_par_mois; ++k) {
         for (; premier_jour_mois > 1; --premier_jour_mois) {
            cout << "   ";
            ++k;
         }
         if (j < 10)
            cout << " ";
         cout << j++;

         if (k != 7) {
            if (j == nb_jour_par_mois) {
              k = 0; }
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
      k = 1;
      j = 1;
   }
   return EXIT_SUCCESS;
}

/************************************************************
*
*      fct qui affiche un message d'au revoir
*
* @param void
* @param void
*
***********************************************************/
void  msg_au_revoir(void) {
   cout  << "A bientot!" << endl;
}