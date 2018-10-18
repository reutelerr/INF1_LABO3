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
#include <stdlib.h> 

using namespace std;

int main() {
   
   const int THROWS_PER_SET = 3;
   const int STARTING_SCORE = 501;
   
   int totalScore = STARTING_SCORE;
   int currentScore = STARTING_SCORE;
   
   int nbThrow = 0; // throw number x/3
   int totalThrows = 0; // total of throws
   
   int value = 0; // throw value
   
   while (currentScore != 0) {
   /*   
      // get user input
      do {
         
      }
      while (true);
   */ 
      ////////// BLOP 1
      
      nbThrow++; // comptage du nombre de tir par set (1,2,3)
      cout << "tir numero: " << nbThrow << endl;

      value = rand() % 21;// get random value
      cout << "valeur du tir: " << value << endl;

      currentScore -= value; // décrémentation de la valeur du tir au currentScore
      cout << "score actuel: " << currentScore << endl << endl;

      // si currentScore est négatif, le currentScore revient à totalScore
      if(currentScore < 0){  
         currentScore = totalScore;
         cout << "Le score courant est NEGATIF, on revient au score total precedent: " << currentScore << endl;
         nbThrow = 0;
         cout << "et on reset le numero du tir a: " << nbThrow << endl << endl;
      }

      // au bout du 3ème tir, on reset le numéro du tir et on met à jour totalScore
      if (nbThrow == THROWS_PER_SET) {
         cout << "on atteint le tir numero: " << nbThrow << endl;
         nbThrow = 0;
         cout << "alors on reset le numero du tir a: " << nbThrow << endl;
         totalScore = currentScore;
         cout << "updated SCORE TOTAL : " << totalScore << endl << endl << endl;
      }
      
      
      /*
      ////////// BLOP 2
      
      for(int i = 1; i <= THROWS_PER_SET; i++){
         
         value = rand() % 21;// get random value
         cout << "valeur du tir: " << value << endl;
         
         nbThrow++;
         cout << "tir numero: " << nbThrow << endl;
         currentScore -= value;
         cout << "score actuel: " << currentScore << endl << endl;
         
         if(currentScore < 0){  
            currentScore = totalScore;
            cout << "Le score courant est NEGATIF, on revient au score total precedent: " << currentScore << endl;
            nbThrow = 0;
            cout << "et on reset le numero du tir a: " << nbThrow << endl << endl;
         }
         
      }
      
      cout << "on atteint le tir numero: " << nbThrow << endl;
      nbThrow = 0;
      cout << "alors on reset le numero du tir a: " << nbThrow << endl;
      totalScore = currentScore;
      cout << "updated SCORE TOTAL : " << totalScore << endl << endl << endl;
      
      */
      
      
      ///////// BLOP 3
      
      /*
      while (nbThrow < THROWS_PER_SET) {
         nbThrow++;
         cout << "tir numero: " << nbThrow << endl;
         value = rand() % 21;// get random value
         cout << "valeur du tir: " << value << endl;
         currentScore -= value;
         cout << "score actuel: " << currentScore << endl << endl;
         
         if(currentScore < 0){  
            currentScore = totalScore;
            cout << "Le score courant est NEGATIF, on revient au score total precedent: " << currentScore << endl;
            nbThrow = 0;
            cout << "et on reset le numero du tir a: " << nbThrow << endl << endl;
         }         
      }
      cout << "AAAAAAAAAAAAAAAAAAH: score actuel " << currentScore << endl;
     
      cout << "on atteint le tir numero: " << nbThrow << endl;
      nbThrow = 0;
      cout << "alors on reset le numero du tir a: " << nbThrow << endl;
      totalScore = currentScore;
      cout << "updated SCORE TOTAL : " << totalScore << endl << endl << endl;
   }
   */
   }
}

