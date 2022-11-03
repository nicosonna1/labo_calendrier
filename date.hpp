//---------------------------------------------------------
// Fichier        : date.hpp
// Version        : 01 - 2022-11-22
// Auteur(s)      : Sangnakkara Julia et Sonnard Nicolas
// But            : ce fichier ne contient uniquement les
//                  déclarations mises à disposition par la librairie
//
//                  Ce fichier doit  documenter les elements
//                  mis à disposition de l'utilisateur
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

//-------------------------------------------------------------------------
// /!\ eviter les inclusions multiples
#ifndef date

//prototype des fonctions

bool   estBissextile (const int& annee);
bool nomMois(const int& mois,string& nomMois);
bool premierJourJanvier(int& annee int& numJour);

#endif
