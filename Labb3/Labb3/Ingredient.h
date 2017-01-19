//Labb 3- Strategy 
//Av David Nilsson Löfvall
//Handledare: Pär Daniel Kardell

/*Ingredient är en klass som är en abstraktion av en ingrediens. Klassen innehåller en sträng med ett namn som kan returneras eller jämföras med en annan ingrediens. Denna klass används av BakeryRecipe.*/


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