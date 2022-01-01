#include "SimplePastTense.h"
#include "Variation1.h"

/*

	Variation 1: Past Tense

	A version of C++ that speaks only of the past. Best used for programs never to be run again.

	Instructions

		1. Write C++ code using the past tense instead of current commands

*/

voided Variation1::HelloWorld()
{
	printed("Hello, World!\n");
}

inted Variation1::_99Bottles()
{
	inted bottleCounted = 99;

	did
	{
		switched(bottleCounted)
		{
			cased 0:
				printed("No more bottles of beer on the wall, no more bottles of beer.\n");
				printed("Go to the store and buy some more, 99 bottles of beer on the wall.\n\n");
				broke;
			cased 1:
				printed("1 bottle of beer on the wall, 1 bottle of beer.\n");
				printed("Take one down and pass it around, no more bottles of beer on the wall.\n\n");
				broke;
			cased 2:
				printed("2 bottle of beer on the wall, 2 bottles of beer.\n");
				printed("Take one down and pass it around, 1 more bottle of beer on the wall.\n\n");
				broke;
			defaulted:
				printed("%d bottles of beer on the wall, %d bottles of beer.\n", bottleCounted, bottleCounted);
				printed("Take one down and pass it around, %d bottles of beer on the wall.\n\n", bottleCounted - 1);
		}
		bottleCounted--;

	} while (bottleCounted was greater than - 1);

	returned 0;
}
