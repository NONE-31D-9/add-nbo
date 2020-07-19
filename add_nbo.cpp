#include "add_nbo.h"

void add_nbo(uint8_t* buf1, uint8_t* buf2) {
	
	uint32_t* p1 = reinterpret_cast<uint32_t*>(buf1);
	uint32_t* p2 = reinterpret_cast<uint32_t*>(buf2);
		
	uint32_t n1 = htonl(*p1);
	uint32_t n2 = htonl(*p2);
	uint32_t result = n1+n2;
		
	printf("%d(%p) + %d(%p) = %d(%p)\n", n1, n1, n2, n2, result, result);
}


