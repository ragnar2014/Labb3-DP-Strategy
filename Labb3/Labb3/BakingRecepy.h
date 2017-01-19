//Labb 3- Strategy 
//Av David Nilsson Löfvall
//Handledare: Pär Daniel Kardell

/*BakingRecepy är en abstraktion av ett recept innehållandes Ingredienser. Klassen är abstrakt. Kontainern är av typ Ingredient och varje objekt av klassen har sina egna ingredienser och ett namn. 
BakingRecep används av BakingRecepyManager. */

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
	bool isBakeable(vector <Ingredient> &skafferi); //Jämför en vectors element med objektets element. 
	string getName() const{ return name; }

protected:
	string name;
	vector <Ingredient> needIngredients;


};





#endif



