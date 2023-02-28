#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct stu
{
	char arr1[10];
	int age;
	char arr2[10];
	char arr3[10];
}stu;
int main()
{
	stu s1 = { "ÕÅÈı",18,"ÄĞ","101010101" };
	printf("%s\n", s1.arr1);
	printf("%d\n", s1.age);
	printf("%s\n", s1.arr2);
	printf("%s\n", s1.arr3);
	return 0;
}