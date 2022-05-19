#pragma once
#include <iostream>
using namespace std;

template<typename T>
class OP {
protected:
	T a, b;
	T result;
	char oper;
public:
	void setvalue(T x, T y, char op) { a = x, b = y, oper = op; };
	virtual void calculate() = 0;
	void print() { cout << "The result is : " << a << oper << b << '=' << result << endl; };
};

template <typename T>
class Add : public OP<T> {
public:
	void calculate() {
		this->result = this->a + this->b;
	}
};

template <typename T>
class Sub : public OP<T> {
public:
	void calculate() {
		this->result = this->a - this->b;
	}
};

template <typename T>
class Mul : public OP<T> {
public:
	void calculate() {
		this->result = this->a * this->b;
	}
};

template <typename T>
class Div : public OP<T> {
public:
	void calculate() {
		if (this->b == 0) {
			cout << "Error : can't devided by zero." << endl;
			this->result = 0;
		}
		else {
			this->result = this->a / this->b;
		}
	}
};

template <typename T>
class Rem : public OP<T> {
public:
	void calculate() {
		this->result = this->a % this->b;
	}
};