#include "arith.h"
#include "math.h"
bool arith(int a)
{
	if (a < 10) return false;
	int k =  (a % 10) - (a / 10) % 10 ;
	a /= 100;
	int d=0;
	while (a>=10) {
		d =  (a % 10) - (a / 10) % 10 ;
		if (k == d) {
			k = d; a /= 100;
		}
		else return false;
	}
	
    return true;
}
