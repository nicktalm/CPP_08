/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:37:46 by ntalmon           #+#    #+#             */
/*   Updated: 2024/12/18 16:04:37 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	try
	{
		std::cout << "[TEST] Looking for value 5 in the vector." << std::endl;
		std::cout << "[RESULT] Found value: " << easyfind(vec, 5) << std::endl;

		std::cout << "[TEST] Looking for value 10 in the vector." << std::endl;
		std::cout << "[RESULT] Found value: " << easyfind(vec, 10) << std::endl;

		std::cout << "[TEST] Looking for value 42 in the vector." << std::endl;
		std::cout << "[RESULT] Found value: " << easyfind(vec, 42) << std::endl;

		std::cout << "[TEST] Looking for value 1 in the vector." << std::endl;
		std::cout << "[RESULT] Found value: " << easyfind(vec, 1) << std::endl;

		std::cout << "[TEST] Looking for value 7 in the vector." << std::endl;
		std::cout << "[RESULT] Found value: " << easyfind(vec, 7) << std::endl;

		std::cout << "[TEST] Looking for value 0 in the vector." << std::endl;
		std::cout << "[RESULT] Found value: " << easyfind(vec, 0) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "[ERROR] Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
