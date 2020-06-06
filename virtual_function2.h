#pragma once
#include "virtual_function2.cpp"

class Base {
public:
	virtual void who() {
		cout << "Base\n";
	}
};

class first_d: public Base {
public:
	virtual void who() {
		cout << "First derivation\n";
	}
};

class second_d : public Base {
public:
	virtual void who() {
		cout << "Second derivation\n";
	}
};

void show_who(Base &r) {
	r.who();
}
