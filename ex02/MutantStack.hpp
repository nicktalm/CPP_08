/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:49:37 by ntalmon           #+#    #+#             */
/*   Updated: 2025/02/04 13:45:50 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
			typedef typename std::stack<T>::container_type::iterator iterator;
			iterator begin();
			iterator end();
			MutantStack();
			MutantStack(MutantStack const & src);
			MutantStack & operator=(MutantStack const & src);
			~MutantStack();
};