#include "checkBox.h"
#include <stdlib.h>
int checkbox(int num) {
	//if (s == "") return 1;
	if (num > 99999) return 2;
	if (num < 0) return 4;
	return 0;
};
/*int checkbox_null(String^ s)
{
	if (s == "") return 1;
	return 0;
};*/
int checkbox(string s) {
	if (s == "") return 1;
	return 0;
};
