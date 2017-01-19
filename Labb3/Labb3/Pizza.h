//Labb 3- Strategy 
//Av David Nilsson Löfvall
//Handledare: Pär Daniel Kardell

/*Deriverad klass av BakingRecepy*/

#ifndef PIZZA_H
#define PIZZA_H


#include "BakingRecepy.h"


class Pizza : public BakingRecepy{

public:
	Pizza(string name) : BakingRecepy(name){
		needIngredients.push_back(Ingredient("Smör"));
		needIngredients.push_back(Ingredient("Jäst"));
		needIngredients.push_back(Ingredient("Mandelmjöl"));
		needIngredients.push_back(Ingredient("Potatismjöl"));
		needIngredients.push_back(Ingredient("Tomat"));
		needIngredients.push_back(Ingredient("Ost"));
		needIngredients.push_back(Ingredient("Skinka"));
		needIngredients.push_back(Ingredient("Lök"));
	
	}
	~Pizza(){}
	void bakeIt();





};

#endif