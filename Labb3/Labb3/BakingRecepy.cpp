//Labb 3- Strategy 
//Av David Nilsson Löfvall
//Handledare: Pär Daniel Kardell


#include "BakingRecepy.h"


/*Funktionen tar en vector av typen Ingredient och loopar genom den för att jämföra dess element med BakingRecepys element. En räknare håller koll på 
huruvida strängarna matchar och inkrementerar därefter. Funktionen förutsätter att endast finns en ingrediens angiven en gång i vector som sökes genom. Jag är fullt medveten om denna sårbarhet
men utifrån labbspecifikationerna kände jag att detta kunde förbises. */

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