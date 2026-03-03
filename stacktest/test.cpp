#include <cassert>
#include <iostream>
#include "stack.h"

void TestStackEmpty() {
	Stack S(10);
	assert(S.empty() == true);

	std::cout << "Test StackEmpty OK" << std::endl;
}

void TestStackPush() {
	{
		Stack S(1);
		S.push(1);
		assert(S.top() == 1);
	}

	{
		int n = 100;
		Stack S(n);
		for(int i = 1; i <= n; ++i){
			S.push(i);
			assert(S.top() == i);
		}
	}

	std::cout << "Test StackPush OK" << std::endl;
}

void TestStackSize() {
	{
		Stack S(1);
		assert(S.size() == 0);
		S.push(1);
		assert(S.size() == 1);
	}

	{
		int n = 100;
		Stack S(n);
		for(int i = 1; i <= n; ++i) {
			S.push(i);
			assert(S.size() == i);
		}
		assert(S.size() == n);
	}

	std::cout << "Test StackSize OK" << std::endl;
}

void TestStackPop(){
}

void TestStackPushPop(){
	int n = 100;
	Stack S(n);
	for(int i = 0; i < n; ++i) {
		S.push(i);
		assert(S.top() == i);
		S.pop();
		assert(S.empty() == true);
		assert(S.size() == 0);
	}

	std::cout << "Test StackpushPop OK" << std::endl;
}

void TestAll(){
	TestStackEmpty();
	TestStackPush();
	TestStackSize();
	TestStackPop();
	TestStackPushPop();
}
