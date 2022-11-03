#ifndef SAISIE_HPP
# define SAISIE_HPP
# include "saisie.hpp"
#endif

#ifndef AFFICHAGE_HPP
# define AFFICHAGE_HPP
# include "affichage.hpp"
#endif

#ifndef DATE_HPP
# define DATE_HPP
# include "date.hpp"
#endif

using namespace std;

//Fct : Saisie utilisateur de l’annee souhaitee pour le calendrier
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
int saisie_annee_calendrier(const int& annee)
{
   bool controle_flux_saisie ;

   do {
      controle_flux_saisie = not(cin >> annee) ;
      if (controle_flux_saisie) {
         nettoyage_flux();
         msg_erreur_saisie()
      }
      VIDER_BUFFER ;
   } while (annee < 1800 || annee > 2100) ;

   return EXIT_SUCESS ;

   //Fct : Nettoyage de flux
   //Si nettoyage fonctionne, fonction retourne EXIT_SUCCESS, sinon, EXIT_FAILURE
   //+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
   bool nettoyage_flux(void) {
      if (cin.clear())
         return EXIT_SUCCESS ;
      return EXIT_FAILURE;
   }
}

//Fct : Menu quitter recommencer
//Retourne True si l’utilisateur souhaite rentrer une nouvelle date,
//False si utilisateur veut quitter et fermer le programme
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

bool menu_quitter(void) {

   char c;

   msg_menu_quitter_prg() ;

   do {
      cin >> c ;
      if (c == 'o' || c == 'O')
         return True;
      else if (c == 'n' || c == 'N')
         return False;
      nettoyage_flux();
      msg_erreur_saisie()
   } while (c != 'o' || c != 'O' ||  c != 'n' || c != 'N');
}

