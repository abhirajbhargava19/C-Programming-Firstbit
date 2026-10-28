#include<Stdio.h>
#include<string.h>

struct Distance{
	int feet;
	int inch;
};
void main(){
	struct Distance d1 = {5,9};
	
	printf("Distance: %d' %d\"\n", d1.feet, d1.inch);
	
	
}