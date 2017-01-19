#include "BakingRecepyManager.h"


BakingRecepyManager::BakingRecepyManager(string filename){
	bakingBook.push_back(shared_ptr<BakingRecepy>(new Pizza("Vezuvio")));
	bakingBook.push_back(shared_ptr<BakingRecepy>(new Br�d("Paleo-br�d")));
	bakingBook.push_back(shared_ptr<BakingRecepy>(new Kladdkaka("Extra kladdig Kladdkaka")));
	counter = 0;
	string skafferiItem;
	ifstream skafferiList(filename, ios::in);

	
	/*L�ser in textfil med ingredienser som finns tillg�ngliga*/
	while (skafferiList)
	{
		getline(skafferiList, skafferiItem);
		skafferi.push_back(skafferiItem);
	}

	/*L�ser in recept. Lite os�ker p� vad detta kodblock egentligen ska g�ra. Kanske en kontroll av att det finns recept �verhuvudtaget? M�jligt att jag missf�rst�tt och lagt detta kodblock i fel klass.
	Kommentarer emotses g�llande detta.*/
	
		
		
	




}

/*Kontrollerar och returnerar en pekare till ett Recept s� l�nge inte r�knaren anser att alla recept �r genomg�ngna. Skulle funktione anropas �nd� kastas ett exception med ett meddelande.*/
shared_ptr<BakingRecepy> BakingRecepyManager::getNextBakingRecepy(){


		

		while (hasAnotherRecepy())
		{


			if (counter <= bakingBook.size()-1)
			{
				if (bakingBook[counter]->isBakeable(skafferi))
				{
					counter++;
					return bakingBook[counter-1];
					
				}

				else
				{
					throw NoBakingException();
				}
			}

			else
			{
				throw NoBakingException();
			}
			
		}

		
		
	
}

/*Hj�lpfunktion f�r att returnera index och pekare till Bakery.*/
shared_ptr<BakingRecepy> BakingRecepyManager::getPointer(int i){

	
	return bakingBook[i];


}
/*Kontrollerar s� att det finns recept kvar att kontrollera*/
bool BakingRecepyManager::hasAnotherRecepy(){


	if (counter < bakingBook.size())
	{
		return true;
	}

	else
	{
		
		return false;
		
	}


}






