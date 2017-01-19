
#ifndef KLADDKAKA_H
#define KLADDKAKA_H


#include "BakingRecepy.h"


class Kladdkaka : public BakingRecepy{

public:
	Kladdkaka(string name) : BakingRecepy(name){
		needIngredients.push_back(Ingredient("�gg"));
		needIngredients.push_back(Ingredient("Bakpulver"));
		needIngredients.push_back(Ingredient("Mandelmj�l"));
		needIngredients.push_back(Ingredient("Mandelmj�lk"));
		needIngredients.push_back(Ingredient("Socker"));
		needIngredients.push_back(Ingredient("Kakao"));
		needIngredients.push_back(Ingredient("Sm�r"));

	}
	~Kladdkaka(){}
	void bakeIt();





};

#endif