
#include <iostream>

using
	std::cout, std::endl
	;

// Proto
int doSumThing(int currentSum, int input);
void thatDangThrower();
void f();
void g();
void h();


int main()
{
	//
	cout << "Hello! My name is Dan Albert Solis" << endl;

	int sum = 0;

	for ( int i = 0; i < 100; i++) {
		sum = doSumThing(sum, i);
	}

	cout << "Final sum: " << sum <<endl;
	return 0;
}

int doSumThing(int currentSum, int input)
{
	bool doPrints = false;
	doPrints  && cout << "doSumThing(" << currentSum << "," << input << ") . Begin" << endl;

	int inputTransformed = input*2;
	int returnValue = currentSum + inputTransformed;

	return currentSum + (input * 2);
}

void thatDangThrower()
{
	int a= 10;

	if (a = 5){
	throw std::runtime_error("oh noes");
	}

}

void f()
{
	g();
}

void g()
{
	h();
}

void h()
{
	thatDangThrower();
}

void naughtyPointers()
{

	int* p1 = nullptr;

	p1 = new int;
	(*p1) = 5;
	cout << p1 << endl;
	cout << (*p1) << endl;

	delete p1;

	(*p1) = 1000;
	cout << (*p1) << endl;

	return;
}
