#include "test_polindrom.hpp"
#include <iostream>
#include <stdio.h>

int main(int argc, char** argv){
	if(argc == 1){
		std::cout << "no file(" << std::endl;
		return 0;
	}

	FILE* f = fopen(argv[1], "r");
	check_polindrome(f);
	fclose(f);

	return 0;

}
