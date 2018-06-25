// 201814039 주동석

#include <stdio.h>

struct date { int month, day, year; };
struct student {
	int number;
	char name[20];
	double grade;
	struct date *dob;
};

int main(void) {
	struct date d = { 3, 20, 1980 };
	struct student s = { 20070001, "Kim", 4.3, &d };  // s.dob = &d;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %f\n", s.grade);
	printf("생년월일: %d년 %d월 %d일\n", s.dob->year, s.dob->month, s.dob->day);

	return 0;
}
