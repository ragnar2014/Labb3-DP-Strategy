//Labb 3- Strategy 
//Av David Nilsson L�fvall
//Handledare: P�r Daniel Kardell

/*BakingRecepyManager �r en abstraktion av en kokbok. Detta �r klassen som h�ller reda p� recept och vad f�r ingredienser som finns tillg�ngliga. Om ett recept kan tillagas skrivs 
tillagningsmetoden ut och kan inte ett recept tillagas skrivs detta ut. BakingRecepyManager �r det som i metoden Strategy kallas Configuration. Den samlar olika typer av algoritmer under en klass.*/


#ifndef BAKINGRECEPYMANAGER_H
#define BAKINGRECEPYMANAGER_H


#include "BakingRecepy.h"
#include <fstream>
#include <memory>
#include "Pizza.h"
#include "Br�d.h"
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

/*Os�ker p� hur denna klass ska definieras och implementeras. Kommentarer g�llande detta motses och �ven f�rslag p� hur en s�dan klass kan se och ut hur den ska fungera. */
class NoBakingException :public exception { // Base class for exceptions

public:
	
	const char* what(){

		return  "Det finns inga fler recept!";
	}
	
	
};


#endif