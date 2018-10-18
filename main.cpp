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
#include <stdlib.h> 

using namespace std;

int main() {

   const int THROWS_PER_SET = 3;
   const int STARTING_SCORE = 501;
   const int MIN_SCORE = 0;
   const int MAX_SCORE = 20;
   const int BULLSEYE = 499;
   
   int totalScore = STARTING_SCORE;
   int currentScore = STARTING_SCORE;
   // throw number x/3
   int nbThrow = 0;
    // total of throws
   int totalThrows = 0;

   
   while (currentScore != 0) {
      nbThrow++;
      totalThrows++;
      
      string inputScore;
      int score;
      // flag to determine if the user inputed a correct value
      bool error;
      do {
         error = false;

         cout << "Score: " << currentScore 
              << " - Jouez la flechette " 
              << nbThrow << "/" << THROWS_PER_SET << endl;
         
         cin  >> inputScore;

         // check if a value was entered
         if (inputScore.empty()) error = true;

         // 
         stringstream ss(inputScore);

         // try and convert the user input into an integer
         if (ss >> score) {
            // check if the score is within the score range
            if ((score < MIN_SCORE or score > MAX_SCORE) and score != BULLSEYE) 
               error = true;
         }
         else 
            error = true;

      } while (error and 
              cout << "Entree non valide" << endl);
      
      // decrement score
      currentScore -= score;
      
      // check if it's a bust.
      // meaning that the score is equal to 1 or lower than 0
      if (currentScore < 0 or currentScore == 1) {  
         currentScore = totalScore;
         cout << "Bust" << endl;
         nbThrow = 0;
         continue;
      }

      // check if the user finished hers/his set of throws
      if (nbThrow == THROWS_PER_SET) {
         nbThrow = 0;
         totalScore = currentScore;
      }
   }
   
   // YAY! User won
   cout << "Score: " << currentScore << " en " << totalThrows << " flechettes" << endl
        << "Bravo!" << endl;

   return 0;
}
