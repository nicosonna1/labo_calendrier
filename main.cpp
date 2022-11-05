#include "affichage.hpp"
#include "saisie.hpp"
#include "date.hpp"


int main() {

   int annee_calendrier;

   msg_bienvenue();

   do {
      msg_explications();
      saisie_annee_calendrier(annee_calendrier);
      affichage_calendrier(annee_calendrier);
      if (menu_quitter())
         return EXIT_SUCCESS;
   } while (1);
}