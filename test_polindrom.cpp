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





void  check_polindrome(FILE* f){
	
	FILE* res = fopen("result.txt", "w");

	while(!feof(f)){
		
		int len, num;
		fscanf(f, "%d\n%n", &num, &len);//в переменную len записывается положение указателя, т.е.  длина самого числа и перенос строки, поскольку ввод форматированный, то все должно быть хорошо...  или нет…? 
		len--;

		fprintf(res, "%d", num);

		int* ar = new int [len];
	

		for(int i = 0; i < len; i++){
			ar[i] = num % 10;
			num /= 10;
		}
	

		if(check_el(ar, len) == 1){
                	fprintf(res, "%s\n", " -- палиндром");
        	}else{
                	fprintf(res, "%s\n", " -- не палиндром");
        	}
		
		delete[] ar;
	}
	
	fclose(res);
}
