/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floats.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 19:41:20 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/07 20:22:38 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOATS_HPP
#define FLOATS_HPP

/*===============================INCLUDES===================================*/

#include <string>
#include <iostream>
#include <limits>
#include "Scalars.hpp"

class Floats {
	private:
		Floats();
		Floats(const Floats &);
		~Floats();
		Floats & operator=(const Floats &);
	public:
		static void convertFloat(std::string);
};

#endif