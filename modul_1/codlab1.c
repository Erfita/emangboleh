#include <stdio.h>

int main(){
	int a = 12;
	int b = 28;
	float c = 2.5;
	float d = 8.9;
	char e = 'r';
	
	//(tambahan komentar disini)
	float sum = a +(b * c) - d;
	printf("bilangan a: %d\n", a);
	printf("bilangan b: %d\n", b);
	printf("bilangan c: %.2f\n", c);
	printf("bilangan d: %.2f\n", d);
	printf("karakter e: %c\n", e);
	printf("hasil %.2f:\n", sum);
	return 0;
	
} 