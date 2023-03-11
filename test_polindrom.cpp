#include"test_polindrom.hpp"
#include <iostream>
#include <stdio.h>




int check_el(int* ar, int len){
	int count = 0;
	for(int i = 0; i < len/2; i++){
                if(ar[i] == ar[len - i - 1]){
                        count += 1;
                }
        }
	if(count == len/2){
		return 1;
	}

	return 0;

}





void  number_test(FILE* f){
	
	FILE* res = fopen("result.txt", "w");

	while(!feof(f)){
		
		int len, num;
		fscanf(f, "%d\n%n", &num, &len);
		len--;

		fprintf(res, "%d", num);

		int ar[len];
	

		for(int i = 0; i < len; i++){
			ar[i] = num % 10;
			num /= 10;
		}
	

		if(check_el(ar, len) == 1){
                	fprintf(res, "%s\n", " -- палиндром");
        	}else{
                	fprintf(res, "%s\n", " -- не палиндром");
        	}
	}
	
	fclose(res);
}
