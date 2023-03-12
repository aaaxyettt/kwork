#include "test_polindrom.hpp"
#include <iostream>
#include <stdio.h>

int main(int argc, char** argv){

	argv[1] -- имя файла!!! его надо считать


	FILE* f = fopen("numbers.txt", "r");
	number_test(f);
	fclose(f);

	return 0;

}
