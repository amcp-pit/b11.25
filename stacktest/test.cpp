#include <cassert>
#include <iostream>
#include "stack.h"
#include "mytest.h"

void TestStackEmpty() {
	Stack S(10);
//	assert(S.empty() == true);
//	std::cout << "Test StackEmpty OK" << std::endl;
//	AssertEqual(S.empty(), true, "must be empty");
	Assert(S.empty(), "must be empty");
}

void TestStackPush() {
	{
		Stack S(1);
		S.push(1);
//		assert(S.top() == 1);
		AssertEqual(S.top(), 1, "one element");
	}

	{
		int n = 100;
		Stack S(n);
		for(int i = 1; i <= n; ++i){
			S.push(i);
//			assert(S.top() == i);
			AssertEqual(S.top(), i, "top is equal pushed");
		}
	}

//	std::cout << "Test StackPush OK" << std::endl;
}

void TestStackSize() {
	{
		Stack S(1);
//		assert(S.size() == 0);
		AssertEqual(S.size(), 0, "size must be zero");
		S.push(1);
//		assert(S.size() == 1);
        AssertEqual(S.size(), 1, "size must be one");
	}

	{
		int n = 100;
		Stack S(n);
		for(int i = 1; i <= n; ++i) {
			S.push(i);
//			assert(S.size() == i);
			AssertEqual(S.size(), i, "label 0");
		}
//		assert(S.size() == n);
		AssertEqual(S.size(), n, "label 1");
	}

//	std::cout << "Test StackSize OK" << std::endl;
}

void TestStackPop(){
	{
		Stack S(1);
		S.push(10);
		S.pop();
		AssertEqual(S.size(), 0, "must be empty");
	}

	{
		int n = 100;
		Stack S(n);
		for(int i=0; i<n; ++i){
			S.push(i + 1);
		}
		for(int i=1; i<n; ++i){
			S.pop();
			Assert(!S.empty(), "must be not empty");
		}
		S.pop();
		AssertEqual(S.size(), 0, "must be empty");
		Assert(S.empty(), "must be empty");
	}

	{
		int n = 100;
		Stack S(n);
		for (int i = 0; i < n; ++i){
			S.push(i+1);
		}
		for (int i = n; i > 0; --i){
			AssertEqual(S.top(), i, "top is equal pushed");
			S.pop();
		}
        AssertEqual(S.size(), 0, "must be empty");
        Assert(S.empty(), "must be empty");
	}
}

void TestStackPushPop(){
	int n = 100;
	Stack S(n);
	for(int i = 0; i < n; ++i) {
		S.push(i);
//		assert(S.top() == i);
		AssertEqual(S.top(), i, "top is equal pushed");

		S.pop();
//		assert(S.empty() == true);
		Assert(S.empty(), "must be empty");
//		assert(S.size() == 0);
		AssertEqual(S.size(), 0, "must be empty");
	}

//	std::cout << "Test StackpushPop OK" << std::endl;
}

void TestAll(){
	TestRunner tr;
	tr.RunTest(TestStackEmpty, "StackEmpty");
    tr.RunTest(TestStackPush, "StackPush");
    tr.RunTest(TestStackSize, "StackSize");
    tr.RunTest(TestStackPop, "StackPop");
    tr.RunTest(TestStackPushPop, "StackPushPop");
}
