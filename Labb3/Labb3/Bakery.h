//Labb 3- Strategy 
//Av David Nilsson Löfvall
//Handledare: Pär Daniel Kardell

/*Bakery anser jag vara vad man i metoden Strategy kallar Context. Context använder en typ av Stategy för att komma åt olika typer av algoritmer.*/


#ifndef BAKERY_H
#define BAKERY_H

#include "BakingRecepyManager.h"

class Bakery{

public:
	Bakery(string filename) {
		recipeBook = shared_ptr<BakingRecepyManager>(new BakingRecepyManager(filename));

	}
	void whatCanWeBake(){

		int nrOfRecipes = recipeBook->getRecipeBookSize();



		try{
			while (recipeBook->hasAnotherRecepy())

			{
				recipeBook->getNextBakingRecepy()->bakeIt();
			}

		/*	else
			{
				cout << recipeBook->getNextBakingRecepy()->getName() << " kunde inte bakas." << endl;

			}
			*/

		}
		catch (NoBakingException& e)
		{
			cerr << e.what();
		}


		/*
		int nrOfRecipes = recipeBook->getRecipeBookSize();

		for (size_t i = 0; i < nrOfRecipes; i++)
		{
		try{
		if (recipeBook->getNextBakingRecepy())
		{
		recipeBook->getPointer(i)->isBakeable(recipeBook->getSkafferi());
		recipeBook->getPointer(i)->bakeIt();
		}

		else
		{
		cout << recipeBook->getPointer(i)->getName() << " kunde inte bakas." << endl;
		throw NoBakingException();
		}


		}
		catch (NoBakingException& e)
		{
		cerr << e.what();
		}

		}*/
	}


private:
	shared_ptr<BakingRecepyManager> recipeBook;

};

#endif // !1



