/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Doubles.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 19:41:20 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/07 20:22:36 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOUBLES_HPP
#define DOUBLES_HPP

/*===============================INCLUDES===================================*/

#include <string>
#include <iostream>
#include <limits>
#include <stdlib.h>
#include "Scalars.hpp"

class Doubles {
	private:
		Doubles();
		Doubles(const Doubles &);
		~Doubles();
		Doubles & operator=(const Doubles &);
	public:
		static void convertDouble(std::string);
};

#endif