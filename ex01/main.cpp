/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:41:35 by ntalmon           #+#    #+#             */
/*   Updated: 2025/02/03 14:04:56 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

// int main()
// {
// 	Span sp = Span(5);

// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);

// 	std::cout << sp.shortestSpan() << std::endl; std::cout << sp.longestSpan() << std::endl;

// 	return 0;
// }

// #include <cstdlib>
// #include <ctime>

// int main()
// {
// 	Span sp = Span(10000);

// 	std::srand(std::time(0));
// 	for (int i = 0; i < 10000; ++i) {
// 		sp.addNumber(std::rand());
// 	}

// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;

// 	return 0;
// }

#include "Span.hpp"
#include <vector>
#include <iostream>

int main()
{
	try
	{
		// Erstelle ein Span-Objekt mit einer maximalen Größe von 100000
		Span sp(100000);

		// Erstelle eine Liste von 100000 Zahlen
		std::vector<int> numbers;
		for (int i = 0; i < 100000; ++i)
		{
			numbers.push_back(i);
		}

		// Füge alle Zahlen aus dem Vektor in einem Aufruf hinzu
		sp.addNumber(numbers.begin(), numbers.end());

		// Teste shortestSpan() und longestSpan()
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
