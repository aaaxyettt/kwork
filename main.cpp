#include "test_polindrom.hpp"
#include <iostream>
#include <stdio.h>

int main(int argc, char** argv){
	
	FILE* f = fopen(argv[1], "r");
	check_polindrome(f);
	fclose(f);

	return 0;

}
