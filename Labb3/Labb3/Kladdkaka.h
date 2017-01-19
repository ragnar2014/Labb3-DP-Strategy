
#ifndef KLADDKAKA_H
#define KLADDKAKA_H


#include "BakingRecepy.h"


class Kladdkaka : public BakingRecepy{

public:
	Kladdkaka(string name) : BakingRecepy(name){
		needIngredients.push_back(Ingredient("Ägg"));
		needIngredients.push_back(Ingredient("Bakpulver"));
		needIngredients.push_back(Ingredient("Mandelmjöl"));
		needIngredients.push_back(Ingredient("Mandelmjölk"));
		needIngredients.push_back(Ingredient("Socker"));
		needIngredients.push_back(Ingredient("Kakao"));
		needIngredients.push_back(Ingredient("Smör"));

	}
	~Kladdkaka(){}
	void bakeIt();





};

#endif