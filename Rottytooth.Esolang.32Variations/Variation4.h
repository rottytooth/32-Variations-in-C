#pragma once
#include "CppVariation.h"
#include "VisualBasic.h"


Module CppInVisualBasicDrag Inherits VisualBasic, CppVariation

	Private Count As Integer


	Public Sub PrintHelloWorld

		Console.Write("Hello, World!")

	End Sub


	Public Function Print99Bottles() As Integer
		Dim bottleCount As Integer
		bottleCount = 99

		Do
			Select Case(bottleCount)
				Case 0
					MarkCount() // FIXME: MarkCount() and RegisterProgress() need to become calls that actually will work when this is run as VB
					Console.Write("No more bottles of beer on the wall, no more bottles of beer.\n")
					Console.Write("Go to the store and buy some more, 99 bottles of beer on the wall.\n\n")
					RegisterProgress()
				Case 1 
					MarkCount()
					Console.Write("1 bottle of beer on the wall, 1 bottle of beer.\n")
					Console.Write("Take one down and pass it around, no more bottles of beer on the wall.\n\n")
					RegisterProgress()
				Case 2 
					MarkCount()
					Console.Write("2 bottle of beer on the wal l, 2 bottles of beer.\n")
					Console.Write("Take one down and pass it around, 1 more bottle of beer on the wall.\n\n")
					RegisterProgress()
				Case Else
					MarkCount()
					Console.Write("%d bottles of beer on the wall, %d bottles of beer.\n", bottleCount, bottleCount)
					Console.Write("Take one down and pass it around, %d bottles of beer on the wall.\n\n", bottleCount - 1)
					RegisterProgress()
			End Select

			bottleCount = bottleCount - 1

			Loop While bottleCount >= 0)

			Return 0

		End Function

End Module

