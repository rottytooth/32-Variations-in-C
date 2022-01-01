#pragma once
#include <stdio.h>
/*
	It is important for this one NOT to use any alternate characters -- here a D is a D, not some Cyrillic thing
*/

#define Module 
#define Inherits : public
#define Public public:
#define Function 
#define Sub
#define End ;};
#define Dim int
#define As
#define Integer ;
#define Do ;do {
#define Loop ;}
#define While while(
#define Return ;return
#define Case ;case
#define case(x) switch(x) { // this generates an error but still works -- Case(x) becomes case(x) becomes switch(x) to differentiate the switch part and case part in VB
#define Select
#define Else -1 : ;default // case of negative one or the default
#define Let ;
#define Private { private: int
#define CppInVisualBasicDrag class Variation4

#define Console ;LocConsole

#define MarkCount() :

#define RegisterProgress() ;break;

class VisualBasic
{
protected:
	class ConsoleClass {
	public:
		static void Write(char* x)
		{
			printf(x);
		}
		static void Write(char* x, int y)
		{
			printf(x, y);
		}
		static void Write(char* x, int y, int z)
		{
			printf(x, y, z);
		}
	};
	ConsoleClass LocConsole;
public:
	
	VisualBasic()
	{
	}
};


// Add your individual function names here:
#define PrintHelloWorld virtual void HelloWorld() {
#define Print99Bottles() virtual int _99Bottles() {


// See Also: Java as C++: http://stackoverflow.com/questions/652788/what-is-the-worst-real-world-macros-pre-processor-abuse-youve-ever-come-across
// and http://www.ioccc.org/2005/chia/chia.c

