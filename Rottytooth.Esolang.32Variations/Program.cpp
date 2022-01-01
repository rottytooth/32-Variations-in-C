#define variationc ജฝ٧ಳฝᎲಳɚෂ6
#include "Variation6.h"

#include <stdio.h> // for getchar() in case the included .h file doesn't have it
#include <string.h>

#define STRINGIZE_(x) #x
#define STRINGIZE(x) STRINGIZE_(x)


int main()
{
	char cpp[2048] = STRINGIZE(variationc);
	strcat(cpp, ".cpp");
	CppVariation *variation = new variationc();
	variation->HelloWorld();
	variation->_99Bottles();

	variation->DrawWordLengthChart(cpp);

	getchar();
}
