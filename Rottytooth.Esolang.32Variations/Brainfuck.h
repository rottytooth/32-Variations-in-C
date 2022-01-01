#pragma once
#include <stdio.h>
#include <stdlib.h>

#define CELLSIZE 65536;


// command flow
#define StartLoop() while (*cell) {  // [
#define EndLoop() }  // ]


class Brainfuck
{
protected:
	const int cellsize = CELLSIZE;
	unsigned char *cell;
public:
	Brainfuck() {
		cell = (unsigned char *)calloc(cellsize, 1);
		unsigned char *cells = cell;
		if (!cell) {
			fprintf(stderr, "Error allocating memory.\n");
		}
	}

	void MoveLeft() // <
	{
		--cell;
	}

	void MoveRight() // >
	{
		++cell;  
	}

	void Increment() // +
	{
		++*cell;
	}

	void Decrement() // -
	{
		--*cell;
	}

	void PutChar() // .
	{
		putchar(*cell);
	}

	void GetChar() // ,
	{
		*cell = getchar();
	}
};


