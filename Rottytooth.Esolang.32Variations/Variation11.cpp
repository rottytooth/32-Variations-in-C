#include "Variation11.h"
/*

	Variation 11: Devil's Incantation

	Instructions:

	1. Say the magic words to make Daemon create what you command of it

*/

void Variation11::HelloWorld()
{
	printf("Hello, World!\n");
}

// Print the lyrics to "99 Bottles of Beer on the Wall" to the screen
int Variation11::_99Bottles()
{
	int bottleCount = 99;

	do
	{
		switch (bottleCount)
		{
		case 0:
			printf("No more bottles of beer on the wall, no more bottles of beer.\n");
			printf("Went to the store and buy some more, 99 bottles of beer on the wall.\n\n");
			break;
		case 1:
			printf("1 bottle of beer on the wall, 1 bottle of beer.\n");
			printf("Took one down and passed it around, no more bottles of beer on the wall.\n\n");
			break;
		case 2:
			printf("2 bottles of beer on the wall, 2 bottles of beer.\n");
			printf("Took one down and passed it around, 1 more bottle of beer on the wall.\n\n");
			break;
		default:
			printf("%d bottles of beer on the wall, %d bottles of beer.\n", bottleCount, bottleCount);
			printf("Took one down and passed it around, %d bottles of beer on the wall.\n\n", bottleCount - 1);
		}
		bottleCount--;

	} while (bottleCount >= 0);

	return 0;
}

const int MAX_WORD_LENGTH = 12;

// A variation on execise 13 in Chapter 1 of Kernighan and Richtie
// will print a historam of how many times words of each length appears in a file.
// Intended to be used on the Variation's source code.
// based on: http://clc-wiki.net/wiki/K%26R2_solutions:Chapter_1:Exercise_13
void Variation11::DrawWordLengthChart(char* filePath)
{
	int len_freq[MAX_WORD_LENGTH + 1]; // Stores the freq of each length             
	int length = 0, height = 0;        // Stores actual length and highest freq      
	int c, i, k;

	FILE *fp;
	fp = fopen(filePath, "r");

	for (i = 0; i <= MAX_WORD_LENGTH; ++i)   // Initialise each element of the len_freq
		len_freq[i] = 0;        // array to be 0

								// Reads the input storing each frequency 
	while ((c = fgetc(fp)) != EOF) {
		if (!isspace(c))
			++length;
		else if (length != 0) {
			if (length <= MAX_WORD_LENGTH) {
				++len_freq[length - 1];
				if (height < len_freq[length - 1])
					height = len_freq[length - 1];
			}
			else {
				++len_freq[MAX_WORD_LENGTH];
				if (height < len_freq[MAX_WORD_LENGTH])
					height = len_freq[MAX_WORD_LENGTH];
			}
			length = 0;
		}
	}
	fclose(fp);

	// Creates the histogram
	for (i = height; i > 0; --i) {
		printf("%3d|", i);
		for (k = 0; k <= MAX_WORD_LENGTH; ++k) {
			if (len_freq[k] >= i)
				printf("   #");
			else
				printf("    ");
		}
		printf("\n");
	}

	printf("   +");
	for (i = 0; i <= MAX_WORD_LENGTH; ++i)
		printf("----");
	printf("\n    ");

	for (i = 0; i <= MAX_WORD_LENGTH; ++i) {
		if (i < MAX_WORD_LENGTH)
			printf("%4d", i + 1);
		else
			printf(" +%d", MAX_WORD_LENGTH);
	}

	printf("\n");
}




