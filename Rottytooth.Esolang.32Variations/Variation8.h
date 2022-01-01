#pragma once
#include <stack>          // std::stack
#include "CppVariation.h"


class Variation8 : public CppVariation
{
protected:
	std::stack<int> intStack;
public:
	Variation8() {
		intStack;
	}

	void PopTopChar() {
		int c = intStack.top();
		intStack.pop();
		printf("%c", c);
	}

	void PopTopInt() {
		int c = intStack.top();
		intStack.pop();
		printf("%d", c);
	}

	void DecrementTop() {
		int c = intStack.top();
		intStack.pop();
		c = c - 1;
		intStack.push(c);
	}

	void HelloWorld();
	
	int _99Bottles();
};



#define ᙵᙵᙵᙵᙵᙵ Variation8
#define ᙵᙵᙵᙵᙵᙶ HelloWorld
#define ᙵᙵᙵᙵᙶᙵ ::
#define ᙵᙵᙵᙵᙶᙶ (
#define ᙵᙵᙵᙶᙵᙵ )
#define ᙵᙵᙵᙶᙵᙶ {
#define ᙵᙵᙵᙶᙶᙵ }
#define ᙵᙵᙵᙶᙶᙶ ;
#define ᙵᙵᙶᙵᙵᙵ void
#define ᙵᙵᙶᙵᙵᙶ int
#define ᙵᙵᙶᙵᙶᙵ intStack.push
#define ᙵᙵᙶᙵᙶᙶ while (!intStack.empty()) { // do until stack is empty
#define ᙵᙵᙶᙶᙵᙵ printf("%c", (char)intStack.top()) // print top of stack as char
#define ᙵᙵᙶᙶᙵᙶ intStack.pop() // pop off the stack
#define ᙵᙵᙶᙶᙶᙵ _99Bottles
#define ᙵᙵᙶᙶᙶᙶ return
#define ᙵᙶᙵᙵᙵᙵ 0
#define ᙵᙶᙵᙵᙵᙶ 1
#define ᙵᙶᙵᙵᙶᙵ +
#define ᙵᙶᙵᙵᙶᙶ 'a'
#define ᙵᙶᙵᙶᙵᙵ 'A'
#define ᙵᙶᙵᙶᙵᙶ ' '
#define ᙵᙶᙵᙶᙶᙵ  while (intStack.size() > 1) { PopTopChar(); } // output everything except the bottom of the stack as chars
#define ᙵᙶᙵᙶᙶᙶ DecrementTop();
#define ᙵᙶᙶᙵᙵᙵ intStack.top() // peek at top of the stack
#define ᙵᙶᙶᙵᙵᙶ printf("%d", intStack.top()); // print top of stack as int
#define ᙵᙶᙶᙵᙶᙵ do
#define ᙵᙶᙶᙵᙶᙶ while
#define ᙵᙶᙶᙶᙵᙵ switch
#define ᙵᙶᙶᙶᙵᙶ case
#define ᙵᙶᙶᙶᙶᙵ :
#define ᙵᙶᙶᙶᙶᙶ break
#define ᙶᙵᙵᙵᙵᙵ default
#define ᙶᙵᙵᙵᙵᙶ 2
#define ᙶᙶᙵᙵᙶᙶ *
#define ᙶᙶᙵᙶᙵᙵ >=
#define ᙶᙶᙵᙶᙵᙶ -
#define ᙶᙶᙵᙶᙶᙵ printf("%d",  // print as int
#define ᙶᙶᙵᙶᙶᙶ 'N'
#define ᙶᙶᙶᙵᙵᙵ 'i'
#define ᙶᙶᙶᙵᙵᙶ 'p'
#define ᙶᙶᙶᙵᙶᙵ 'k'
#define ᙶᙶᙶᙵᙶᙶ 'T'
#define ᙶᙶᙶᙶᙵᙵ '1'
#define ᙶᙶᙶᙶᙵᙶ '2'

