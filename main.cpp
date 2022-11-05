#ifndef CALENDRIER
#define CALENDRIER
#include "affichage.hpp"
#include "date.hpp"
#include "saisie.hpp"
#endif //CALENDRIER

using namespace std;

int main() {

   int annee_calendrier;

   msg_bienvenue();

   do {
      msg_explications();
      saisie_annee_calendrier(annee_calendrier);
      affichage_calendrier(annee_calendrier);
      if (menu_quitter()) {
         msg_au_revoir();
         return EXIT_SUCCESS; }
   } while (1);
}