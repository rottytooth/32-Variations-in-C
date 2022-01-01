#include "Variation5.h"


/*

Variation 5


Instructions

	1. Write code in the most verbose version of C++ possible.

	2. Every command should plainly state what it does.

*/


ThisMethodReturnsNothing TheFifthVariationOfTheThirtyTwoVariationsInCPlusPlusProject Contains AMethodThatPrintsTheWordHelloCommaSpaceWorldExclamationToTheConsole (WithNoParameters) Begin Function PrintToTheScreen TheString "Hello, World!" EndOfString EndOfCommand End Function


ThisMethodReturnsAnInteger TheFifthVariationOfTheThirtyTwoVariationsInCPlusPlusProject Contains AMethodThatPrintsTheLyricsToTheSongNinetyNineBottlesOfBeerOnTheWallToTheConsole (WithNoParameters)
Begin Function DeclareANewIntenger TheCurrentNumberOfBottlesOfBeer AndSetItsValueTo Ninety-Nine EndOfCommand

DoRepeatedlyUntilGivenAStatementToConsiderAndThenDecideBasedOnThatExpressionWhetherToContinue BeginABlockOfCommands SelectAStatement BasedOnTheValueOf TheCurrentNumberOfBottlesOfBeer AndBasedOnThatValue

	IfTheValueIs 0:
		PrintToTheScreen TheString "No more bottles of beer on the wall, no more bottles of beer.\n" EndOfString EndOfCommand
		PrintToTheScreen TheString "Went to the store and buy some more, 99 bottles of beer on the wall.\n\n" EndOfString EndOfCommand
		ExitThisRoutine EndOfCommand
	IfTheValueIs 1:
		PrintToTheScreen TheString "1 bottle of beer on the wall, 1 bottle of beer.\n" EndOfString EndOfCommand
		PrintToTheScreen TheString "Took one down and passed it around, no more bottles of beer on the wall.\n\n" EndOfString EndOfCommand
		ExitThisRoutine EndOfCommand
	IfTheValueIs 2:
		PrintToTheScreen TheString "2 bottles of beer on the wall, 2 bottles of beer.\n" EndOfString EndOfCommand
		PrintToTheScreen TheString "Took one down and passed it around, 1 more bottle of beer on the wall.\n\n" EndOfString EndOfCommand
		ExitThisRoutine EndOfCommand
	IfWeStillDontKnowWhatTheValueIs :
		PrintToTheScreen TheString "%d bottles of beer on the wall, %d bottles of beer.\n", TheCurrentNumberOfBottlesOfBeer, TheCurrentNumberOfBottlesOfBeer EndOfString EndOfCommand
		PrintToTheScreen TheString "Took one down and passed it around, %d bottles of beer on the wall.\n\n", TheCurrentNumberOfBottlesOfBeer minus 1 EndOfString EndOfCommand
		EndABlockOfCommandsInvokedEarlier
	TheCurrentNumberOfBottlesOfBeer SubtractOne EndOfCommand

EndABlockOfCommandsInvokedEarlier AndKeepGoingAsLongAs TheCurrentNumberOfBottlesOfBeer HasAValueGreaterThanOrEqualToZero EndOfCommand
ReturnTheValue Zero EndOfCommand

End Function


