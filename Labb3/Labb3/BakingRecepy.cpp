//Labb 3- Strategy 
//Av David Nilsson L�fvall
//Handledare: P�r Daniel Kardell


#include "BakingRecepy.h"


/*Funktionen tar en vector av typen Ingredient och loopar genom den f�r att j�mf�ra dess element med BakingRecepys element. En r�knare h�ller koll p� 
huruvida str�ngarna matchar och inkrementerar d�refter. Funktionen f�ruts�tter att endast finns en ingrediens angiven en g�ng i vector som s�kes genom. Jag �r fullt medveten om denna s�rbarhet
men utifr�n labbspecifikationerna k�nde jag att detta kunde f�rbises. */

bool BakingRecepy::isBakeable(vector <Ingredient> &skafferi){

	int count = 0;
	bool loop = false;

	
	for (size_t i = 0; i < skafferi.size(); i++)
	{
				string tempIngred = skafferi[i].getName();

				for (size_t j = 0; j < needIngredients.size(); j++)
				{
					if (needIngredients[j].getName() == tempIngred)
					{
						count++;
						if (count == needIngredients.size())
						{
							loop = true;
							break;
						}
						break;
					}


				}


			
	}

	if (loop)
	{
		return true;
	}

	else
	{
		return false;
	}

}