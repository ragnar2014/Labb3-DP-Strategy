//Labb 3- Strategy 
//Av David Nilsson Löfvall
//Handledare: Pär Daniel Kardell


/*Deriverad klass av BakingRecepy*/

#ifndef BRÖD_H
#define BRÖD_H


#include "BakingRecepy.h"


class Bröd : public BakingRecepy{

public: Bröd(string aType) : BakingRecepy(aType){

	needIngredients.push_back(Ingredient("Smör"));
	needIngredients.push_back(Ingredient("Jäst"));
	needIngredients.push_back(Ingredient("Mandelmjöl"));
	needIngredients.push_back(Ingredient("Potatismjöl"));
	needIngredients.push_back(Ingredient("Ägg"));


}
		~Bröd(){}
		void bakeIt();



};


#endif