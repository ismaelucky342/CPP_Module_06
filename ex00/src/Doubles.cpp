/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Doubles.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 19:55:51 by ismherna          #+#    #+#             */
/*   Updated: 2025/01/14 14:53:58 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Doubles.hpp"
#include <cmath>
#include <iomanip>

int isdisplayabled(char it) {
	return (it >= 32 && it <= 126);
}

Doubles::Doubles() {
	std::cout << GREEN "[Build] Double convert" RESET << std::endl;
}

Doubles::~Doubles() {
	std::cout << RED "[Destroyed] Double convert" RESET << std::endl;
}

Doubles::Doubles(Doubles const &src) {
	std::cout << BLUE "[Copy] Double convert" RESET << std::endl;
	*this = src;
}

Doubles & Doubles::operator=(const Doubles &src) {
	std::cout << BLUE "[Assignament] Double convert" RESET << std::endl;
	if (this == &src)
		return *this;
	return *this;
}


void Doubles::convertDouble(std::string str) {
	char* endptr = NULL;
	const char* val = str.c_str();
	double it = std::strtod(val, &endptr);
	if (str.length() < 2 && !isdigit(static_cast<char>(val[0])) && isdisplayabled(val[0]))
		it = static_cast<double>(val[0]);

	if (std::isnan(static_cast<double>(it)))
		std::cout << RED "double:\t"<< "nan" RESET << std::endl;
	else if (std::isinf(static_cast<double>(it)))
		if (static_cast<double>(it) < 0)
			std::cout << RED "double:\t-inf\n" RESET;
		else
			std::cout << RED "double:\tinf\n" RESET;
	else
		std::cout  << std::fixed << RED "double:\t" RESET<< std::setprecision(1) << static_cast<double>(it) <<  std::endl;
}
