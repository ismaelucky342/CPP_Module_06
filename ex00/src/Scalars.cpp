/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalars.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 19:33:39 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/07 21:22:07 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Scalars.hpp"
#include "../includes/Chars.hpp"
#include "../includes/Integrers.hpp"
#include "../includes/Floats.hpp"
#include "../includes/Doubles.hpp"

Scalars::Scalars() {
	std::cout << "[Build] Scalar convert" << std::endl;
}

Scalars::~Scalars() {
	std::cout << "[Destroyed] Scalar convert" << std::endl;
}

Scalars::Scalars(Scalars const &src) {
	std::cout << "[Copy] Scalar convert" << std::endl;
	*this = src;
}

Scalars & Scalars::operator=(Scalars const &src) {
	std::cout << "[Assignament] Scalar convert" << std::endl;
	if (this == &src)
		return *this;
	return *this;
}

void Scalars::convert(std::string src) {
	(void)src;
	Chars::convertChar(src);
	Integrer::convertInt(src);
	Floats::convertFloat(src);
	Doubles::convertDouble(src);
}
