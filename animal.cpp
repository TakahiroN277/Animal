#include <iostream>
#include "animal.h"

using namespace std;

void main() {
	Dog dog;
	Dog* ptr = &dog;
	string a;

	a =	ptr->naku();

	cout << a;

	return;
}