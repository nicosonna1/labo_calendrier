#ifndef INCLUDES_DATE_H
#define INCLUDES_DATE_H
#include <cstdlib>

bool estBissextile(const int& annee_calendrier);
void nomMois(const int& numero_mois);
//bool premierJourJanvier(int& annee_calendrier, const int& numJour);
int nbJoursMois(int& numero_mois, const int& annee_calendrier, int& totalJours);

#endif //INCLUDES_DATE_H
