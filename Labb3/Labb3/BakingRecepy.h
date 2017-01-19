//Labb 3- Strategy 
//Av David Nilsson L�fvall
//Handledare: P�r Daniel Kardell

/*BakingRecepy �r en abstraktion av ett recept inneh�llandes Ingredienser. Klassen �r abstrakt. Kontainern �r av typ Ingredient och varje objekt av klassen har sina egna ingredienser och ett namn. 
BakingRecep anv�nds av BakingRecepyManager. */

#ifndef BAKINGRECEPY_H
#define BAKINGRECEPY_H

#include "Ingredient.h"
#include <vector>
#include <fstream>
#include <iostream>

class BakingRecepy{


public:
	BakingRecepy(string aName) : name(aName){}
	virtual ~BakingRecepy(){}
	virtual void bakeIt() = 0;
	bool isBakeable(vector <Ingredient> &skafferi); //J�mf�r en vectors element med objektets element. 
	string getName() const{ return name; }

protected:
	string name;
	vector <Ingredient> needIngredients;


};





#endif



