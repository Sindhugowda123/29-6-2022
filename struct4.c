#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct emp
{
	int id;
	char name[20];
	float height;
}v1;

int main()
{
	v1 *ptr = (v1*)malloc(sizeof(v1));
	ptr->id = 210321;
	//ptr->name = "sindhu" ; //Syntax error : Assignement to expression with array type, because ename stores base address of array so we cannot point to base address
	strcpy(ptr->name, "sindhu");
	ptr->height = 5.3;
	printf("id = %d\nname = %s\nheight = %g\n", ptr->id, ptr->name, ptr->height);
}
