/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chars.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 19:56:02 by ismherna          #+#    #+#             */
/*   Updated: 2025/01/14 14:53:41 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Chars.hpp"

Chars::Chars() {
	std::cout << GREEN "[Build] Char convert" RESET << std::endl;
}

Chars::~Chars() {
	std::cout << RED "[Destroyed] Char convert" RESET << std::endl;
}

Chars::Chars(Chars const &src) {
	std::cout << "[Copy] Char convert" << std::endl;
	*this = src;
}

Chars & Chars::operator=(Chars const &src) {
	std::cout << BLUE "[Assignament] Char convert" RESET << std::endl;
	if (this == &src)
		return *this;
	return *this;
}

int isdisplayablec(double it) {
	return (it >= 32 && it <= 126);
}

void Chars::convertChar(std::string str) {
	char* endptr = NULL;
	const char* val = str.c_str();
	double it = std::strtod(val, &endptr);
	if (str.length() == 1 && !isdigit(static_cast<double>(val[0])) && isdisplayablec(val[0]))
		it = static_cast<char>(val[0]);
	if (std::isnan(it)) {
		std::cout << RED "char:\t" << "impossible" RESET << std::endl;
		return;
	}
	if (isdisplayablec(it))
		std::cout << "char:\t\'"<< static_cast<char>(it) <<"\'" << std::endl;
	else if (str.length() > 3)
		std::cout << RED "char:\t"<< "impossible" RESET << std::endl;
	else
		std::cout << RED "char:\t"<< "Non displayable" RESET  << std::endl;
}
