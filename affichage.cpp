#ifndef AFFICHAGE_HPP
# define AFFICHAGE_HPP
# define cin.ignore(numeric_limits<streamsize>::max(), '\n') VIDER_BUFFER
# include "affichage.hpp"
#endif

using namespace std;

//Fct : Affichage message bienvenue et « manuel » du programme
void  msg_bienvenue_explications(void) {
   cout  << "Bonjour, bienvenue dans notre calculateur de calendrier"	   << endl ;
   cout  << "Saisissez l’annee dont vous souhaitez afficher le calendrier" << endl
         << "Veuillez entrer une valeur situee entre 1800 et 2100"         << endl ;
}

//Fct : Affichage message d’erreur
void  msg_erreur_saisie(void) {
   cout  << "Erreur, veuillez saisir une date entre 1800 et 2100."  << endl;
}

//Fct : Affichage message menu quitter ou relancer le programme ?
void msg_menu_quitter_prg(void) {
   cout  << "Voulez-vous afficher un autre calendrier ?" << endl
         << "[ O / N ] ?"                                << endl;
}
