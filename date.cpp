//---------------------------------------------------------
// Demo           : affichage
// Fichier        : affichage.cpp
// Version        : 01 - 2022-09-05
// Auteur(s)      : Sangnakkara Julia && Nicolas Sonnard
// But            : ce fichier contient les
//                  declarations mises a disposition par la librairie
//
//                  Librairie permettant l'affichage des differents
//                  elements du programme.
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include "date.hpp"

using namespace std;

<<<<<<< HEAD
// constante locale
// choix de 1601 car tombe un lundi. Il faut toujours prendre un lundi
const int ANNEE_MIN=1798;




=======
>>>>>>> 3b8a52cb4a3d1a15a345daa1423ddf242c7d6942
/************************************************************
*
*      fct permettant de determiner si une annee
*      est bissextile ou non
*
* @param annee_calendrier
* @param bool
*
***********************************************************/
bool estBissextile(const int& annee_calendrier) {

    return (annee_calendrier % 400 == 0) || (annee_calendrier % 4 == 0 && annee_calendrier % 100 != 0);

}

/************************************************************
*
*      fct qui renvoie le nbr de jour dans un mois donne
*      la fct renvoie un boolean si cela c'est bien passe.
*
* @param mois
* @param annee
* @param nbjour
* @param error
*
***********************************************************/
int nbJoursMois(int& numero_mois, const int& annee_calendrier, int& totalJours) {
   switch (numero_mois) {
      case  1 : totalJours= 31;                                   break;
      case  2 : totalJours= 28 + estBissextile(annee_calendrier); break;
      case  3 : totalJours= 31;                                   break;
      case  4 : totalJours= 30;                                   break;
      case  5 : totalJours= 31;                                   break;
      case  6 : totalJours= 30;                                   break;
      case  7 : totalJours= 31;                                   break;
      case  8 : totalJours= 31;                                   break;
      case  9 : totalJours= 30;                                   break;
      case 10 : totalJours= 31;                                   break;
      case 11 : totalJours= 30;                                   break;
      case 12 : totalJours= 31;                                   break;
      default : return EXIT_FAILURE;
   }
   return totalJours;
}




int nbAnneBisexctille(const int& anneeFin){
    int nbAnnee=0;
    for(int i=ANNEE_MIN ; i<=anneeFin; ++i){
        if (estBissextile(i)){
         cout << i <<"     ";
         nbAnnee+=1;}

    }
    return nbAnnee;
}

/************************************************************
*
*      fct qui calcule le premier jour de janvier
*      selon wikipedia le calendrier georgien a ete adopté
*     en 1548 par consequent la fonctionne commencer en 1601 min
*     le premier janvier 1600 etait un samedi donc 6 eme jour
* @param annee
* @param error
*
***********************************************************/
/*
// constante locale
// choix de 1601 car tombe un lundi. Il faut toujours prendre un lundi
const int ANNNEE_MIN = 1900;

signed int  premier_jour_janvier(const int& annee){

    /*
    unsigned int nbJours = (annee - 1) * 365;
    nbJours += ((annee - 1) / 4);
    nbJours -= ((annee - 1) / 100);
    nbJours += ((annee - 1) / 400);
    nbJours += 2;
*//*
    // retour une erreur car hors limite
    int deltaAnnee = (annee - 1) - ANNNEE_MIN;
    // division par 4 toleree a condition que ANNEE_MIN ait un lundi 1er janvier
    int anneeBissexctile = deltaAnnee / 4 ;
    int anneeNormale = deltaAnnee-anneeBissexctile;
    int totalAnnee = anneeBissexctile * 366 + anneeNormale * 365 + deltaAnnee / 100 + 1 ;
    return totalAnnee % 7 + 1;
}*/

signed int  premier_jour_janvier(const int& annee_calendrier){
   int ref_year = 1900, leap = 0, diff, total_days = 0;

   diff = annee_calendrier - ref_year;

   while (ref_year < annee_calendrier)
   {
      if (ref_year % 100 == 0) {
         if (ref_year % 400 == 0)
            leap++;
      }
      else {
         if (ref_year % 4 == 0)
            leap++;
      }
      ref_year++;
   }

