//Labb 3- Strategy 
//Av David Nilsson L�fvall
//Handledare: P�r Daniel Kardell

/*Ingredient �r en klass som �r en abstraktion av en ingrediens. Klassen inneh�ller en str�ng med ett namn som kan returneras eller j�mf�ras med en annan ingrediens. Denna klass anv�nds av BakeryRecipe.*/


#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <string>

using namespace std;

class Ingredient {
public:
	Ingredient(string aName)
		:iName(aName) {}
	string getName() const { return iName; }
	operator string() const { return iName; }
	bool operator==(const Ingredient &rhs) const {
		return iName == rhs.iName;
	}
private:
	string iName;
};



#endif