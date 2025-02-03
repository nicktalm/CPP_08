/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:54:05 by ntalmon           #+#    #+#             */
/*   Updated: 2025/02/03 13:33:31 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <set>

class Span
{
	private:
		unsigned int		_maxsize;
		std::multiset<int>	_list;
	public:
		Span(void);
		Span(unsigned int size);
		Span(Span const & src);
		Span & operator=(Span const & src);
		~Span(void);
		void addNumber(unsigned int new_number);
		template <typename T>
		void addNumber(T start, T end)
		{
			if (this->_list.size() >= this->_maxsize || this->_list.size() + std::distance(start, end) > this->_maxsize)
				throw std::runtime_error("Span reached max size");
			this->_list.insert(start, end);
		}
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
};