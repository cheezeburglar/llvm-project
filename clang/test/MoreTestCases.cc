#include "stdint.h"
void test_memcpy (uintptr_t addr) {
	__builtin_memcpy(( void __seg_fs *)addr, "x", 1);
	__builtin_memcpy(( void __seg_gs *)addr, "x", 1);
}

void test_memset (uintptr_t addr) {
  	__builtin_memset((void __seg_fs *)addr, 0, 1);
  	__builtin_memset((void __seg_gs *)addr, 0, 1);
}

void test_memmove (uintptr_t addr) {
  	__builtin_memmove((void __seg_fs *)addr, (void *)addr, 1);
  	__builtin_memmove((void __seg_gs *)addr, (void *)addr, 1);
}

int main () {
	return 0;
}
