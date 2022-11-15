/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:50:15 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/15 16:58:12 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top ---> " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size ---> " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	// 5  3 5  737 0
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	MutantStack<int> msstack(mstack);
	std::stack<int> s(mstack);
	return 0;
}
