#include<stdio.h>
#include<string.h>

struct Time{
	int hour;
	int min;
	int sec;
};
void main(){
	struct Time t1 = { 15, 8, 14};;
	
	printf("Time: %02d:%02d:%02d\n", t1.hour, t1.min, t1.sec);
}
void formatTime(struct Time *s) {
    printf("Rollno: %d\n", s->hour);
    printf("Name: %s\n", s->min);
    printf("Marks: %d\n", s->sec);
}   