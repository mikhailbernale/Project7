#include "arith.h"
#include "math.h"
#include <vector>
bool arith(int a)
{
	int delta = 0;
	int delta2 = 0;
	std::vector<int> d;
	while (a > 0) {
		d.push_back(a % 10);
		a /= 10;
	}
	int i = 0;
	if (d.size() == 1||d.size() == 0) return false;
	if (d.size() == 2) return true;
	while(i<d.size())
	{
		delta = d[i] - d[++i];
		delta2 = d[i] - d[i+1];
		if (delta != delta2) return false;
	}
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

