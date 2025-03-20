/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 19:22:54 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/10 22:19:38 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Serial.hpp"

int main() {
	Data *dat = new Data();
	
	uintptr_t rs = Serial::serial(dat);
	Serial::deserial(rs);
	delete dat;
}
