#include "arith.h"
#include "math.h"
bool arith(int a)
{
	int i=0;
	if (a == 0) return false;
	int b = a;
	while (b > 0) {
		i++;
		b /= 10;
	}
	if (i == 1) return false;
	if (i == 2) return true;
	if (i == 3) {

		int delta1 = a % 10 - a / 10 % 10;
		a /= 10;
		int delta2 = a % 10 - a / 10 % 10;
		if (delta1 != delta2) return false;

	};
	if (i == 4) {
		int delta1 = a % 10 - a / 10 % 10;
		a /= 10;
		int delta2 = a % 10 - a / 10 % 10;
		a /= 10;
		if (delta1 != delta2) return false;
		int delta3 = a % 10 - a / 10 % 10;
		if (delta2 != delta3) return false;
	};
	if (i == 5) {
		int delta1 = a % 10 - a / 10 % 10;
		a /= 10;
		int delta2 = a % 10 - a / 10 % 10;
		a /= 10;
		if (delta1 != delta2) return false;
		int delta3 = a % 10 - a / 10 % 10;
		if (delta2 != delta3) return false;
		a /= 10;
		int delta4 = a % 10 - a / 10 % 10;
		if (delta3 != delta4) return false;
	};
	return true;
}


	/*int delta=0;
	int i = 10;
	while (a >= 1) {
		delta
		if (i != 10) {


			double delta2 = a % i - a % (i * 10);

		}

		i = i * 10;
	}*/

