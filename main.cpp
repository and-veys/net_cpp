#include <iostream>
#include <chrono>
#include <thread>

#include "socket_wrapper/socket_headers.h"
#include "socket_wrapper/socket_wrapper.h"
#include "socket_wrapper/socket_class.h"

uint32_t my_inet_addr(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
		d = d << 24;
		c = c << 16;
		b = b << 8;
		a = a | b | c | d;
		return a;
}


int main()
{
	return 0;
}



