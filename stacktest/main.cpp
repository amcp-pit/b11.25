//#define NDEBUG
#include <iostream>
#include <cassert>
#include "stack.h"
#include "test.h"

#define assertm(exp, msg) assert(((void)msg, exp))

int main() {

#ifndef NDEBUG
	TestAll();
#endif

	std::cout << "size: ";
	int n;
	std::cin >> n;
//	assert((n > 0) && "stack size must be positive");
//	assert(((void)"stack size must be positive", n > 0));
	assertm(n>0, "stack size must be positive");
	Stack S(n);

	for(int i = 0; i < n; ++i){
		S.push(i + 1);
	}

	while(!S.empty()) {
		std::cout << S.top() << " ";
		S.pop();
	}

	// S.pop();
	return 0;
}
