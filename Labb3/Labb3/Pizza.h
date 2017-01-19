//Labb 3- Strategy 
//Av David Nilsson L�fvall
//Handledare: P�r Daniel Kardell

/*Deriverad klass av BakingRecepy*/

#ifndef PIZZA_H
#define PIZZA_H


#include "BakingRecepy.h"


class Pizza : public BakingRecepy{

public:
	Pizza(string name) : BakingRecepy(name){
		needIngredients.push_back(Ingredient("Sm�r"));
		needIngredients.push_back(Ingredient("J�st"));
		needIngredients.push_back(Ingredient("Mandelmj�l"));
		needIngredients.push_back(Ingredient("Potatismj�l"));
		needIngredients.push_back(Ingredient("Tomat"));
		needIngredients.push_back(Ingredient("Ost"));
		needIngredients.push_back(Ingredient("Skinka"));
		needIngredients.push_back(Ingredient("L�k"));
	
	}
	~Pizza(){}
	void bakeIt();





};

#endif