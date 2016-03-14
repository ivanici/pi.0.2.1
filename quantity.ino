#include "defs.h"

/*
gestion du nombre de pas par rapport au volume demander.
0,20 ml = 120,65 pas. 
il faut ajouter une fonction qui gere la viscositer du produit.( si le temp le permet)
*/

float *volum[] = {
  &volum_1,
  &volum_2,
  &volum_3,
  &volum_4,
  &volum_5
};

void distribution(){
  volumPerRevolution = (pi*rSyringe*rSyringe*lPerRevolution);
  volumPerStep = (volumPerRevolution / steps);

  for (int i = 0; i < numberOfSeringues; i++){ // transferer le volume indiquer sur chaque seringue.
     //il faut d'abord changer le chariot de place.
     //float stepsForTotalVolum = volum[i]/volumPerStep;
     //moveMotor(i, stepsForTotalVolum);
     //volum[i]=0;
  }
  
}

