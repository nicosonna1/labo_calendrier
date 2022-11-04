#ifndef INCLUDES_SAISIE_HPP
#define INCLUDES_SAISIE_HPP
//#define cin.ignore(numeric_limits<streamsize>::max(), '\n') VIDER_BUFFER

#include <limits>
#include <iostream>
#include "saisie.hpp"

bool saisie_annee_calendrier(int& annee_calendrier);
bool nettoyage_flux(void);
bool menu_quitter(void);

#endif //INCLUDES_SAISIE_HPP
