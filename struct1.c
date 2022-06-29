#include<stdio.h>

//#pragma pack(1)
//#pragma pack(2)
#pragma pack(4)
//#pragma pack(8)

struct test 
{
	char ch1;
	int a;
	short int b;
	float f1;
	double d1;
};

int main()
{
	struct test v1;
	printf("%zu\n", sizeof(v1));
}


