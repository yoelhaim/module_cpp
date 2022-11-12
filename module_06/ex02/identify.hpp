/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:34:59 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/11 20:41:54 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
class Base
{
public:
	virtual ~Base();
	Base *generate(void);
	void identify(Base *p);
	void identify(Base &p);
};
class A : public Base
{
};
class B : public Base
{
};
class C : public Base
{
};
