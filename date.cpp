
#include "date.hpp"
#include <iostream>     // cout et cin


using namespace std;

// constante locale
// choix de 1601 car tombe un lundi. Il faut toujours prendre un lundi
const int ANNEE_MIN=1798;




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
signed int  premier_jour_janvier(const int& annee){

    /*
    unsigned int nbJours = (annee - 1) * 365;
    nbJours += ((annee - 1) / 4);
    nbJours -= ((annee - 1) / 100);
    nbJours += ((annee - 1) / 400);
    nbJours += 2;
*/
    // retour une erreur car hors limite
    unsigned int deltaAnnee=annee-ANNEE_MIN;
    //division par 4 toleree a condition que ANNEE_MIN ait un lundi 1 er janvier
    unsigned int anneeBissexctile = nbAnneBisexctille(annee);
    unsigned int anneeNormale =deltaAnnee-anneeBissexctile;

    unsigned int totalJourAnnee = anneeBissexctile*366 + anneeNormale*365 +1 ;
    cout<< "\r\n annee"<< annee << "nb annee normale " << anneeNormale << "nb annee bisextille " << anneeBissexctile << "total jours " << totalJourAnnee<<"delta annee " << deltaAnnee ;
    // ajout de 1 au jour car lundi = 1
    return totalJourAnnee%7;
    // return ok car annee correct
    return true;

}



