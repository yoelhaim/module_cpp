#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;

	// float nbr =  42.42f;

	// float nb = nbr * (1<<8);

	// int r = (int) roundf(nb);

	// float rf = (float) r / 256 ;

	// cout << nb << endl;
	// cout << r << endl;
	// cout << (rf) << endl;

	// double n1 = 0.1;
	// double n2 = 0.2;
	// double n3 = 0.3;
	// cout << roundf(n1 + n2)<< endl;
	// if (n1 + n2 == n3)
	// 	cout << "hello"<< endl;
}