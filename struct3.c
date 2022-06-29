#include<stdio.h>

struct emp
{
	int id;
	char name[30];
	float height;
}v1 = {210321,"sindhu",5.3};  //stored in data segment

int main()
{

	struct emp v1 = {210321,"sindhu",5.3};            //stored in stack segment
	printf("%d %s %g\n", v1.id, v1.name, v1.height);
}

