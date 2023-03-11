#include "test_polindrom.hpp"
#include <iostream>
#include <stdio.h>

int main(){

FILE* f = fopen("numbers.txt", "r");
	number_test(f);
	fclose(f);

	return 0;

}
