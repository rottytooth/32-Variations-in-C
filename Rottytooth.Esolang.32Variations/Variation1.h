#pragma once
#include <stdio.h>
#include "CppVariation.h"

class Variation1 : public CppVariation 
{
public:

	void HelloWorld();

	int _99Bottles();

	void DrawWordLengthChart(char* filePath)
	{
		CppVariation::DrawWordLengthChart(filePath);
	}
};

