#include "checkBox.h"
#include <stdlib.h>
int checkbox(string s) {
	if (s == "") return 1;
	int num = atoi(s.c_str());
	if (num > 99999) return 2;
	if (num >= 11) return 3;
	if (num < 0) return 4;
}
;