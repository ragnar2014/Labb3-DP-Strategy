//Labb 3- Strategy 
//Av David Nilsson L�fvall
//Handledare: P�r Daniel Kardell


/*Deriverad klass av BakingRecepy*/

#ifndef BR�D_H
#define BR�D_H


#include "BakingRecepy.h"


class Br�d : public BakingRecepy{

public: Br�d(string aType) : BakingRecepy(aType){

	needIngredients.push_back(Ingredient("Sm�r"));
	needIngredients.push_back(Ingredient("J�st"));
	needIngredients.push_back(Ingredient("Mandelmj�l"));
	needIngredients.push_back(Ingredient("Potatismj�l"));
	needIngredients.push_back(Ingredient("�gg"));


}
		~Br�d(){}
		void bakeIt();



};


#endif