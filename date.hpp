#ifndef INCLUDES_DATE_H
#define INCLUDES_DATE_H
#include <cstdlib>

//bool premierJourJanvier(int& annee_calendrier, const int& numJour);
bool estBissextile(const int& annee_calendrier);
void nomMois(const int& numero_mois);
int nbJoursMois(int& numero_mois, const int& annee_calendrier, int& totalJours);

#endif //INCLUDES_DATE_H
