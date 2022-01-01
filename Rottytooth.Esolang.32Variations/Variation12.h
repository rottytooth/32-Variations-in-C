#pragma once
#include <stdio.h>
#include "CppVariation.h"


class Variation12 : public CppVariation
{
public:

	virtual void DoThings(char * whatToDo);

	void HelloWorld()
	{
		DoThings("Hello, World!");
	}
	int _99Bottles()
	{
		DoThings("99 Bottles thing");
	}
	int OrWhatever()
	{
		DoThings("Or whatever");
	}
};

#define Start void Variation12::DoThings(char * whatToDo) {

#define End }

#define Program

