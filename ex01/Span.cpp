/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:54:15 by ntalmon           #+#    #+#             */
/*   Updated: 2025/02/03 13:35:53 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

Span::Span(void) : _maxsize(0)
{
}

Span::Span(unsigned int size) : _maxsize(size)
{
}

Span::Span(Span const & src)
{
	*this = src;
}

Span & Span::operator=(Span const & src)
{
	if (this != &src)
	{
		_maxsize = src._maxsize;
		_list = src._list;
	}
	return *this;
}

Span::~Span(void)
{
}

void Span::addNumber(unsigned int new_number)
{
	if (_list.size() >= _maxsize)
		throw std::runtime_error("Span reached max size");
	_list.insert(new_number);
}

unsigned int Span::shortestSpan(void)
{
	if (_list.size() <= 1)
		throw std::runtime_error("Not enough numbers to calculate span");
	std::multiset<int>::iterator it1 = _list.begin();
	std::multiset<int>::iterator it2 = _list.begin();
	it2++;
	unsigned int span = static_cast<unsigned int>(std::abs(*it1 - *it2));
	while (it2 != _list.end())
	{
		if (static_cast<unsigned int>(std::abs(*it1 - *it2)) < span)
			span = static_cast<unsigned int>(std::abs(*it1 - *it2));
		it1++;
		it2++;
	}
	return span;
}

unsigned int Span::longestSpan(void)
{
	if (_list.size() <= 1)
		throw std::runtime_error("Not enough numbers to calculate span");
	std::multiset<int>::iterator it = _list.begin();
	std::multiset<int>::iterator it2 = _list.end();
	it2--;
	return std::abs(*it - *it2);
}