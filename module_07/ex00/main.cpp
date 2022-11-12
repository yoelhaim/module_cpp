/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:25:14 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/12 20:41:59 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class Awesome
{
public:
	Awesome(void) : _n(0) {}
	Awesome(int n) : _n(n) {}
	Awesome &operator=(Awesome &a)
	{
		_n = a._n;
		return *this;
	}
	bool operator==(Awesome const &rhs) const { return (this->_n == rhs._n); }
	bool operator!=(Awesome const &rhs) const { return (this->_n != rhs._n); }
	bool operator>(Awesome const &rhs) const { return (this->_n > rhs._n); }
	bool operator<(Awesome const &rhs) const { return (this->_n < rhs._n); }
	bool operator>=(Awesome const &rhs) const { return (this->_n >= rhs._n); }
	bool operator<=(Awesome const &rhs) const { return (this->_n <= rhs._n); }
	int get_n() const
	{
		return this->_n;
	}

private:
	int _n;
};

std::ostream &operator<<(std::ostream &o, Awesome const &rhs)
{
	o << rhs.get_n();
	return o;
}

int main()
{
	Awesome a(2), b(4);
	swap(a, b);

	std::cout << a << " " << b << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

	// int a = 2;
	// int b = 3;
	// ::swap(a, b);
	// std::cout << "a = " << a << ", b = " << b << std::endl;

	// std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	// std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

	// std::string c = "chaine1";
	// std::string d = "chaine2";
	// ::swap(c, d);
	// std::cout << "c = " << c << ", d = " << d << std::endl;
	// std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	// std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	return 0;
}