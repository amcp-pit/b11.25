#include "stack.h"

void Stack::free() {
	delete[] data_;
	data_ = nullptr;
	maxsize_ = 0;
	size_ = 0;
}

Stack& Stack::operator=(const Stack & other) {
	if (this != &other) {
		free();
		maxsize_ = other.maxsize_;
		data_ = new int[maxsize_];
		for(int i = 0; i < other.size_; ++i){
			data_[i] = other.data_[i];
		}
		size_ = other.size_;
	}
	return *this;
}
