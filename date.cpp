#ifndef DATE_HPP
#define DATE_HPP
#include <cstdlib>
#include <iostream>
#include "date.hpp"
#endif //DATE_HPP

using namespace std;

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
   if (annee_calendrier % 4 == 0 && annee_calendrier % 100 != 0 )
        return true;
   return false;
}

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
      //default : return EXIT_FAILURE;
   }
   //return EXIT_SUCCESS;
}

/************************************************************
*
*      fct qui renvoie le nbr de jour dans un mois donne
*      la fct renvoie un boolean si cela c'est bien passe.
*
* @param numero_mois
* @param annee_calendrier
* @param nbjour
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