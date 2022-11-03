

#include <cstdlib>
#include <iostream>
#include <vector>
#include "date.hpp"

using namespace std;




/************************************************************
*
*      fonction permettant de savoir si une annee 
*      est bissextil ou non 
*
* @param annee
* @param bool
*
***********************************************************/
bool estBissextile(const int& annee) {
    if (annee % 4 ==0 && annee % 100 !=0 )
        return true;
   else return false;
}

/************************************************************
*
*      fonction de renvoyer le nom d'un mois 
*      la fonction renverra un boolean ssavoir si cela c'est 
*      bien passé.
*
* @param annee
* @param string
*
***********************************************************/


bool nomMois(const int& mois,string& nomMois) {
   static const vector<string> MOIS = {"janvier",
                                       "fevrier", 
                                       "mars",      
                                       "avril",   
                                       "mai",      
                                       "juin",
                                       "juillet", 
                                       "aout",    
                                       "septembre", 
                                       "octobre", 
                                       "novembre", 
                                       "decembre"};

    if (mois>=0 && mois <=11)
   //repris de l'exemple  volontairement un .at pour lever une exception
   nomMois = MOIS.at( size_t(mois - 1) );
   return true;
   else return return false;
}


/************************************************************
*
*      fonction de renvoyer le nom d'un mois 
*      la fonction renverra un boolean ssavoir si cela c'est 
*      bien passé.
*
* @param mois
* @param annee
* @param nbjour
* @param error
*
***********************************************************/
bool  nbJoursMois(int& mois, int& annee, int& totalJours) {
   switch (mois) {
      case  1 : totalJours= 31;
                break;
      case  2 : totalJours= 28 + estBissextile(annee);
                break;
      case  3 : totalJours= 31;
                break;
      case  4 : totalJours= 30;
                break;
      case  5 : totalJours= 31;
                break;
      case  6 : totalJours= 30;
                break;
      case  7 : totalJours= 31;
                break;
      case  8 : totalJours= 31;
                break;
      case  9 : totalJours= 30;
                break;
      case 10 : totalJours= 31;
                break;
      case 11 : totalJours= 30;
                break;
      case 12 : totalJours= 31;
      default : return false;       // return d'une valeur à 0 comme ça si on la test elle sera fausse
   }
   return true; // ici tout est ok

}


