#include<stdio.h>
#include<stdlib.h>
struct {
	int id;
	char name[20];
}*STRUCTURE_POINTER;

int main()
{
STRUCTURE_POINTER = malloc(sizeof(STRUCTURE_POINTER));
STRUCTURE_POINTER->id = 10;
printf("%d\n",STRUCTURE_POINTER->id);
}
