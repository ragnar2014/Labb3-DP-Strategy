//Labb 3- Strategy 
//Av David Nilsson Löfvall
//Handledare: Pär Daniel Kardell

/*BakingRecepyManager är en abstraktion av en kokbok. Detta är klassen som håller reda på recept och vad för ingredienser som finns tillgängliga. Om ett recept kan tillagas skrivs 
tillagningsmetoden ut och kan inte ett recept tillagas skrivs detta ut. BakingRecepyManager är det som i metoden Strategy kallas Configuration. Den samlar olika typer av algoritmer under en klass.*/


#ifndef BAKINGRECEPYMANAGER_H
#define BAKINGRECEPYMANAGER_H


#include "BakingRecepy.h"
#include <fstream>
#include <memory>
#include "Pizza.h"
#include "Bröd.h"
#include "Kladdkaka.h"


class BakingRecepyManager {

public: 
	BakingRecepyManager(){}

	BakingRecepyManager(string filename);
	void setBakingRecepyFile(string pfilename);
	bool hasAnotherRecepy();
	shared_ptr<BakingRecepy> getNextBakingRecepy();
	shared_ptr<BakingRecepy>getPointer(int i);
	vector <Ingredient> getSkafferi(){ return skafferi;}
	int getRecipeBookSize(){ return bakingBook.size(); }
	
private: 

	int counter;
	vector <Ingredient> skafferi;
	vector <shared_ptr<BakingRecepy>> bakingBook;
	shared_ptr<BakingRecepy> recipeBookmark;

};

/*Osäker på hur denna klass ska definieras och implementeras. Kommentarer gällande detta motses och även förslag på hur en sådan klass kan se och ut hur den ska fungera. */
class NoBakingException :public exception { // Base class for exceptions

public:
	
	const char* what(){

		return  "Det finns inga fler recept!";
	}
	
	
};


#endif