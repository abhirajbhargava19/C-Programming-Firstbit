#include<stdio.h>
#include<string.h>

struct Complex{
	float real;
	float imag;
};

void main(){
	struct Complex c1 = {3,4};
	
	printf("Complex: %.1f + %.1fi\n", c1.real, c1.imag);
}