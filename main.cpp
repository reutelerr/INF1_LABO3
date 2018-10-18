/*
 -----------------------------------------------------------------------------------
 Laboratoire : 03
 Fichier     : main.cpp
 Auteur(s)   : Rosalie Chhen, Robin Reuteler, Doran Kayoumi
 Date        : 17.10.2018

 But         : Mettre en place un système de comptage de point pour le jeu de 
               fléchette 501 double out.

 Remarque(s) : Les valeurs données par l'utilisateur ne sont pas fiable.

 Compilateur : MinGW-g++ <6.3.0>
 -----------------------------------------------------------------------------------
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include <typeinfo>

using namespace std;

int main() {

   const int THROWS_PER_SET = 3;
   const int STARTING_SCORE = 501;
   const int MIN_SCORE = 0;
   const int MAX_SCORE = 20;
   const int BULLSEYE = 25;
   
   int totalScore = STARTING_SCORE;
   int currentScore = STARTING_SCORE;
   int nbThrows = 0;
   int score;
   
   string inputScore;
   // flag to determine if the user inputed a correct value
   bool error;
   
   do {
      error = false;
      
      cout << "Score: ## - Jouez la flechette $$/3" << endl;
      cin  >> inputScore;
     
      // check if a value was entered
      if (inputScore.empty()) error = true;
      
      
      stringstream ss(inputScore);
      
      ss >> score;
      
      if ((score < MIN_SCORE or score > MAX_SCORE) and score != BULLSEYE) 
         error = true;
      
   } while (error and 
           cout << "Entree non valide" << endl);
   
   /*
   while (currentScore != 0) {
      
      // get user input
      do {
         
      }
      while (true); 
   }
   */
   return 0;
}

