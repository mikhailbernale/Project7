#include "mod_7.h"

bool mod_7(int a)
{
	int sum = 0;
	while (a) {
		sum += a % 10;
		a /= 10;
	}
	if (sum % 7 == 0) return true;
	return false;
}
