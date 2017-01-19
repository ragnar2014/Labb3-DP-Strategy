#include "BakingRecepyManager.h"


BakingRecepyManager::BakingRecepyManager(string filename){
	bakingBook.push_back(shared_ptr<BakingRecepy>(new Pizza("Vezuvio")));
	bakingBook.push_back(shared_ptr<BakingRecepy>(new Bröd("Paleo-bröd")));
	bakingBook.push_back(shared_ptr<BakingRecepy>(new Kladdkaka("Extra kladdig Kladdkaka")));
	counter = 0;
	string skafferiItem;
	ifstream skafferiList(filename, ios::in);

	
	/*Läser in textfil med ingredienser som finns tillgängliga*/
	while (skafferiList)
	{
		getline(skafferiList, skafferiItem);
		skafferi.push_back(skafferiItem);
	}

	/*Läser in recept. Lite osäker på vad detta kodblock egentligen ska göra. Kanske en kontroll av att det finns recept överhuvudtaget? Möjligt att jag missförstått och lagt detta kodblock i fel klass.
	Kommentarer emotses gällande detta.*/
	
		
		
	




}

/*Kontrollerar och returnerar en pekare till ett Recept så länge inte räknaren anser att alla recept är genomgångna. Skulle funktione anropas ändå kastas ett exception med ett meddelande.*/
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

/*Hjälpfunktion för att returnera index och pekare till Bakery.*/
shared_ptr<BakingRecepy> BakingRecepyManager::getPointer(int i){

	
	return bakingBook[i];


}
/*Kontrollerar så att det finns recept kvar att kontrollera*/
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






