#include "prime_factor.h"
#include <iostream>
int main()
{
	PrimeFactor a(60);
	PrimeFactor b(15);
	(a + b).print();
	(a - b).print();
	(a * b).print();
	(a / b).print();

	PrimeFactor c(1000);
	PrimeFactor d(100);
	c.print();
	d.print();

	(c + d).print();

	(c - d).print();

	(c * d).print();
	(c / d).print();


	PrimeFactor e(2310);
	e.print();
	return 0;
}
