/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chars.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 19:41:20 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/07 20:22:34 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARS_HPP
#define CHARS_HPP

/*===============================INCLUDES===================================*/

#include <string>
#include <iostream>
#include <limits>
#include <cmath>
#include <stdlib.h>
#include "Scalars.hpp"

class Chars {
	private:
		Chars();
		Chars(const Chars &);
		~Chars();
		Chars & operator=(const Chars &);
	public:
		static void convertChar(std::string);
};

#endif