/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 19:22:54 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/07 21:31:42 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Base.hpp"
#include "includes/A.hpp"
#include "includes/B.hpp"
#include "includes/C.hpp"
#include <memory>
#include <stdlib.h>
#include <stdexcept>
#include <iostream>

static	size_t	randNumber()
{
	return ((rand() % 3) );
}

template <typename T>
Base* newClass() {
	return new T();
}

Base* randomClass(int index) {
    typedef Base* (*Creator)();
	Creator creators[] = {
		&newClass<A>,
		&newClass<B>,
		&newClass<C>
	};
	return creators[index]();
}

void identify(Base *p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << GREEN "A\n" RESET << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << GREEN "B\n" RESET << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << GREEN "C\n" RESET << std::endl;
	} else {
		std::cout << RED "Unknown type\n" RESET << std::endl;
	}
}

void identify(Base &p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << GREEN "A\n" RESET << std::endl;
	} catch (std::exception &e) {
		try {
			(void)dynamic_cast<B&>(p);
			std::cout << GREEN "B\n" RESET << std::endl;
		} catch (std::exception &ex) {
			try {
				(void)dynamic_cast<C&>(p);
				std::cout << GREEN "C\n" RESET << std::endl;
			} catch (std::exception &exc) {
				std::cout << RED "Unknown type\n" RESET << std::endl;
			}
		}
	}
}

int main() {
	srand(time(NULL));

	size_t valor = randNumber();
	std::cout << "pos:\t"  <<  valor << std::endl;
	Base *rand1 = randomClass(valor);
	std::cout << "class:\t";
	identify(rand1);

	valor = randNumber();
	std::cout << "pos:\t"  <<  valor << std::endl;
	Base *rand2 = randomClass(valor);
	std::cout << "class:\t";
	identify(*rand2);

	valor = randNumber();
	std::cout << "pos:\t"  <<  valor << std::endl;
	Base *rand3 = randomClass(valor);
	std::cout << "class:\t";
	identify(rand3);

	delete rand1;
	delete rand2;
	delete rand3;

}
