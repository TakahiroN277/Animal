#pragma once
#include <iostream>
using namespace std;

class Animal {
public:
	void run();
	void run(int a);
	virtual string naku();

};

void Animal::run() {
	cout << "runrun\n";
}

void Animal::run(int a) {
	cout << a << "”{‘¬runrun\n";
}

 
string Animal::naku() {
	cout << "weeen\n";

	return "aaa";
}

class Dog : public Animal
{
public:
	void ote() { cout << "ote\n"; }
	string naku() { 
		cout << "wanwan\n"; 
		return "dogdog\n";
	}
};


