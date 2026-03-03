#pragma once

#include <cassert>

struct Stack{
private:
	int* data_;
	int size_;
	int maxsize_;
public:
	Stack(int size) : size_(0), maxsize_(size) {
		assert(size > 0);
		data_ = new int[maxsize_];
	}
	Stack(const Stack & other) : size_(other.size_) {
		maxsize_ = other.maxsize_;
		data_ = new int[maxsize_];
		for(int i = 0; i < size_; ++i){
			data_[i] = other.data_[i];
		}
	}
	Stack& operator=(const Stack & other);
	void free();
	~Stack(){
		free();
	}
	void push(int x) {
		assert(size_ < maxsize_);
		data_[size_] = x;
		++size_;
	}
	void pop(){
		--size_;
		assert(size_ >= 0);
	}
	int top() const{
		assert(size_ > 0);
		return data_[size_ - 1];
	}
	int size() const {
		return size_;
	}
	bool empty() const{
		return size_ == 0;
	}
};
