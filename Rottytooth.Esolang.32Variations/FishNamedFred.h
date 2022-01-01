#pragma once

#include "Brainfuck.h"
/*
	there once was a fish named fred,
	his brain was made of lead,
	he drank too much beer,
	that old high school year,
	and now fred in dead cause you don't mix beer and lead
*/

/*
	I picked this as the simplest brainfuck equivalent because:

	1) it has no punctuation, so it's easy to build in c++

	2) the seemingly random combinations of a small vocabulary remind me of early algorist poetry,
		such as A House of Dust by Alison Knowles http://zachwhalen.net/pg/dust/ 

	3) it's pulled from just about the dumbest limerick I've ever seen. Pulling this together with 
		algorist poetry just felt ... poetic somehow
*/

#define there MoveLeft();

#define once MoveRight();

#define was Increment();

#define a Decrement();

#define fish PutChar();

#define named StartLoop()

#define Fred EndLoop()


