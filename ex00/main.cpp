/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 19:22:54 by ismherna          #+#    #+#             */
/*   Updated: 2025/01/14 14:48:00 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Scalars.hpp"

std::string arrToStr(char *val)
{
	int i = -1;
	std::stringstream ss;
	while (val[++i])
		ss << val[i];
	return ss.str();
}
 
int main(int argc, char **argv) {
	
	if (argc != 2) {
		std::cout << RED "ERROR:The arguments to be converted were not sent" RESET << std::endl;
		return 0;
	}
	Scalars::convert(arrToStr(argv[1]));
}
