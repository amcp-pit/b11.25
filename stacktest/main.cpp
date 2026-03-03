//#define NDEBUG
#include <iostream>
#include <cassert>
#include "stack.h"
#include "test.h"

int main() {

#ifndef NDEBUG
	TestAll();
#endif

	std::cout << "size: ";
	int n;
	std::cin >> n;
	assert(n > 0);
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
