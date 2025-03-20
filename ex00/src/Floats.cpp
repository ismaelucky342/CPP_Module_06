/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floats.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 19:56:02 by ismherna          #+#    #+#             */
/*   Updated: 2025/01/14 14:44:46 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Floats.hpp"
#include <cstdlib>
#include <cmath>
#include <iomanip>

Floats::Floats() {
	std::cout << GREEN "[Build] Float convert" RESET << std::endl;
}

Floats::~Floats() {
	std::cout << RED "[Destroyed] Float convert" RESET<< std::endl;
}

Floats::Floats(Floats const &src) {
	std::cout << BLUE "[Copy] Float convert" RESET << std::endl;
	*this = src;
}

Floats & Floats::operator=(Floats const &src) {
	std::cout << BLUE "[Assignament] Float convert" RESET << std::endl;
	if (this == &src)
		return *this;
	return *this;
}

int isdisplayablef(char it) {
	return (it >= 32 && it <= 126);
}

void Floats::convertFloat(std::string str) {

	char* endptr = NULL;
	const char* val = str.c_str();
	float flt = std::strtof(val, &endptr);
	if (str.length() < 2 && !isdigit(static_cast<char>(val[0])) && isdisplayablef(val[0]))
		flt = static_cast<float>(val[0]);

	if (std::isnan(static_cast<float>(flt)))
		std::cout << RED "float:\t"<< "nanf" RESET << std::endl;
	else if (std::isinf(static_cast<float>(flt)))
		if (static_cast<float>(flt) < 0)
			std::cout << RED "float:\t-inff\n" RESET;
		else
			std::cout << RED "float:\tinff\n" RESET;
	else
		std::cout  << std::fixed << RED "float:\t" RESET<< std::setprecision(1) << static_cast<float>(flt) << "f"<< std::endl;
}
