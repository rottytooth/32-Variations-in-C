#include "Variation3.h"

/*

	Variation 3: Brainfuck Variation 1

	Instructions

		1. Write code in the brainfuck variant Fish Named Fred. Within each method, all the code should fit the format of that language.

*/

void Variation3::HelloWorld()
{
	was was was was was was was was named once was was was was named once was was once was was was once was was 

	was once was there there there there a Fred once was once was once a once once was named there Fred there a

	Fred once once fish once a a a fish was was was was was was was fish fish was was was fish once once fish there

	a fish there fish was was was fish a a a a a a fish a a a a a a a a fish once once was fish once was was fish
}

int Variation3::_99Bottles()
{
	return 0;
}


// What it translates into:
/*
void Variation3::HelloWorld()
{
	++*cell; ++*cell; ++*cell; ++*cell; ++*cell; ++*cell; ++*cell; ++*cell; 
	while (*cell) 
	{ 
		++cell; ++*cell; ++*cell; ++*cell; ++*cell; 
		while (*cell) { 
			++cell; ++*cell; ++*cell; ++cell; ++*cell; ++*cell; ++*cell; ++cell; ++*cell; ++*cell; ++*cell; ++cell;
			++*cell; --cell; --cell; --cell; --cell; --*cell; 
		} 
		++cell; ++*cell; ++cell; ++*cell; ++cell; --*cell; ++cell; ++cell; ++*cell; 
		while (*cell) { --cell; } --cell; --*cell; 
	} 
	++cell; ++cell; putchar(*cell); ++cell; --*cell; --*cell; --*cell; putchar(*cell); ++*cell; ++*cell; ++*cell; 
	++*cell; ++*cell; ++*cell; ++*cell; putchar(*cell); putchar(*cell); ++*cell; ++*cell; ++*cell; putchar(*cell); 
	++cell; ++cell; putchar(*cell); --cell; --*cell; putchar(*cell); --cell; putchar(*cell); ++*cell; ++*cell; 
	++*cell; putchar(*cell); --*cell; --*cell; --*cell; --*cell; --*cell; --*cell; putchar(*cell); --*cell; 
	--*cell; --*cell; --*cell; --*cell; --*cell; --*cell; --*cell; putchar(*cell); ++cell; ++cell; ++*cell; 
	putchar(*cell); ++cell; ++*cell; ++*cell; putchar(*cell);
}
*/
