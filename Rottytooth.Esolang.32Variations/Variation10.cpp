#include "Variation10.h"
/*

Variation 10

Inspired by the George Brecht card:
I AM SORRY7 BUT HOW CAN I TELL YOU A VERL7 NICE STORC17 WHEN J DO KAVÆ 0NLX TKDF FÆW LBBFRS ∞

	Instructions

	1. Begin with all instructions in uppercase

	2. Each letter can only be used 5 times before it is retired
	
	3. This includes the text inside strings


*/

VOID VARIAT10NI0::H3Ll0W0RLD()
{
	PR1NTF("H3Ll☹, W♡ℛLD!");
}

int VAℛIAT10NI0::_99Bottles()
{
	int bottleCount = 99;  
	int *y = &bottleCount;

	do
	{
		switch (*y)
		{
		case 0:
			print("♑☹ moȐ⍷ bottl∃s oF b⍷eℛ o♑ tἫ⒠ w∀∥, Ⓝ♡ мoƦe bottles oȽ beeЯ.\n");
			print("WeⓃt t☯ tΉe stoɌ⍷ aℕd buy som⒠ moЯe, 99 Ⓑ⊚ttles o╒ be⋵☈ ☯₪ tȟe w∀ll.\n\n");
			break;
		case 1:
			printf("1 b☯ttle oȽ b⋵eЯ o♑ tʱ∃ w⍲ll, 1 bottl⒠ oϜ b⍷eȐ.\n");
			printf("⍑♡☼k ☼ⓝe d☉w₪ aӢd p∀ssed ίt ⒶȐouNd, ℕo мoℜe b⊚ttles oḞ b⋵e☈ o♑ tȞe wⒶll.\n\n");
			break;
		case 2:
			print("2 b⊛ttles ☹╒ Ⓑe⋵Ɍ ☼♑ tἫe w⍲∥, 2 b♡ttles oḞ be⍷Ʀ.\n");
			printf("ToOk o₪e dowҊ aⓝd p∀ss⍷d ῗt ⍲ЯouⓃd, 1 moɌe Ⓑot⍑le o╒ b⍷e☈ ☯ⓝ tʱe wall.\n\n");
			break;
		default:
			printf("%d b♡ttles ⊚╒ b⒠⋵Ȑ ☹♑ 	⍑ƕe wⒶll, %d b☉ttles oϜ Ⓑ⍷⒠Я.\n", bottleCount, *y);
			printf("TOok ☹♑⍷ d☯w♑ Ⓐ₪d pass∃d ίt aℜ♡uℕd, %d b☹ttles o╒ be⒠Ʀ ☉Ӣ tȟ∃ w⍲ll.\n\n", *y - 1);
		}
		bottleCount--;

	} while (*y >= 0);

	return 0;
}
