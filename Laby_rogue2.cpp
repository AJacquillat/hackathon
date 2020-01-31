#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

int main()
{
   ifstream fichier("laby_rogue.txt");

   if(fichier)
   {
       string ligne1;
       int n;
       while(getline(fichier, ligne1)) 
      {n++;}
     
      string ligne;
      string tab[n];
      int c=0; 

      while(getline(fichier, ligne)) 
      {
         cout << ligne << endl;
         tab[c]=ligne;
         c++;
         

      }
      
   }
   else./
   {
      cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
   }

   return 0;
}