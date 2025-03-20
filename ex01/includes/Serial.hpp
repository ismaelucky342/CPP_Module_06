#ifndef Serial_HPP
#define Serial_HPP

/*===============================INCLUDES===================================*/

#include "Datas.hpp"
#include <iostream>
#include <stdint.h>
# include <stdint.h>

/*=================================CLASS=====================================*/

class Serial {
	private:
		Serial();
		Serial(const Serial &);
		~Serial();
		Serial & operator=(const Serial &);
	public:
		static uintptr_t serial(Data *ptr);
		static Data *deserial(uintptr_t raw);
};

#endif