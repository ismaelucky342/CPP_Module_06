/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integrer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 19:56:02 by ismherna          #+#    #+#             */
/*   Updated: 2025/01/14 14:54:48 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Integrers.hpp"
#include <stdlib.h>
#include <climits>

Integrer::Integrer() {
	std::cout << GREEN "[Build] Int convert" RESET<< std::endl;
}

Integrer::~Integrer() {
	std::cout << RED "[Destroyed] Int convert" RESET<< std::endl;
}

Integrer::Integrer(Integrer const &src) {
	std::cout << BLUE "[Copy] Int convert" RESET<< std::endl;
	*this = src;
}

Integrer & Integrer::operator=(Integrer const &src) {
	std::cout << BLUE "[Assignament] Int convert" RESET<< std::endl;
	if (this == &src)
		return *this;
	return *this;
}

int isdisplayablei(char it) {
	return (it >= 32 && it <= 126);
}

void Integrer::convertInt(std::string str) {
	char* endptr = NULL;
	const char* val = str.c_str();
	double dbl = std::strtod(val, &endptr);
	int it = atoi(val);
	if (str.length() < 2 && !isdigit(static_cast<char>(val[0])) && isdisplayablei(static_cast<char>(val[0])))
		it = static_cast<int>(val[0]);
	
	if (dbl <= INT_MAX && dbl >= INT_MIN)
		std::cout << RED "int:\t" RESET << it <<std::endl;
	else
		std::cout << RED "int:\t" << "impossible" RESET<<std::endl;
}
