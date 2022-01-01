#pragma once
#include "CppVariation.h"
#include "Verbose.h"

class Variation5 : public CppVariation
{
public:
	
	void HelloWorld();
	
	int _99Bottles();
};

// #defines specific to this project

#define TheFifthVariationOfTheThirtyTwoVariationsInCPlusPlusProject Variation5
#define AMethodThatPrintsTheLyricsToTheSongNinetyNineBottlesOfBeerOnTheWallToTheConsole _99Bottles
#define AMethodThatPrintsTheWordHelloCommaSpaceWorldExclamationToTheConsole HelloWorld
