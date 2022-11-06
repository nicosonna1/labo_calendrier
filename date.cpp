
#include "date.hpp"
#include <iostream>     // cout et cin


using namespace std;

// constante locale
// choix de 1798 car tombe un lundi. Il faut toujours prendre un lundi
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
    for(int i=ANNEE_MIN ; i< anneeFin; ++i){
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
*     en 1548 par consequent la fonctionne commencer en 1798 min
*     le premier janvier 1600 etait un samedi donc 6 eme jour
* @param annee
* @param error
*
***********************************************************/
<<<<<<< HEAD
signed int  premier_jour_janvier(const int& annee){


    unsigned int deltaAnnee=annee-ANNEE_MIN;
    //division par 4 toleree a condition que ANNEE_MIN ait un lundi 1 er janvier
    unsigned int anneeBissexctile = nbAnneBisexctille(annee);
    unsigned int anneeNormale =deltaAnnee-anneeBissexctile;
=======



/*
signed int  premier_jour_janvier(const int& annee){

const int ANNNEE_MIN = 1900;
 // retour une erreur car hors limite
 int deltaAnnee = (annee - 1) - ANNNEE_MIN;
 // division par 4 toleree a condition que ANNEE_MIN ait un lundi 1er janvier
 int anneeBissexctile = deltaAnnee / 4 ;
 int anneeNormale = deltaAnnee-anneeBissexctile;
 int totalAnnee = anneeBissexctile * 366 + anneeNormale * 365 + deltaAnnee / 100 + 1 ;
 return totalAnnee % 7 + 1;
}*/

signed int  premier_jour_janvier(const int& annee_calendrier){
   int ref_year = 1798, leap = 0, diff, total_days = 0;
>>>>>>> 811e594f1ea8add6cc28566294776f6a945a6142

signed int  premier_jour_janvier(const int& annee){


    unsigned int deltaAnnee=annee-ANNEE_MIN;
    //division par 4 toleree a condition que ANNEE_MIN ait un lundi 1 er janvier
    unsigned int anneeBissexctile = nbAnneBisexctille(annee);
    unsigned int anneeNormale =deltaAnnee-anneeBissexctile;

    // calcule des jour totau ajout de 1 pour l'anne en cour.
    unsigned int totalJourAnnee = anneeBissexctile*366 + anneeNormale*365 +1 ;

    return totalJourAnnee%7;


}
