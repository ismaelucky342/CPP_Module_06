/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integrer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 19:41:20 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/07 20:22:39 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGRER_HPP
#define INTEGRER_HPP

/*===============================INCLUDES===================================*/

#include <string>
#include <iostream>
#include <limits>
#include "Scalars.hpp"

class Integrer {
	private:
		Integrer();
		Integrer(const Integrer &);
		~Integrer();
		Integrer & operator=(const Integrer &);
	public:
		static void convertInt(std::string);
};

#endif