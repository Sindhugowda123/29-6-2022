#include<stdio.h>

typedef struct test
{
	enum colors{yellow, green, red, blue}diff_colors;
}var;

int main()
{
	var v1;
	v1.diff_colors = red;
	printf("%d\n", v1.diff_colors);
}

