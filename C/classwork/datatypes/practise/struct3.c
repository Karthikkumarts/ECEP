#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	char name[20];
};

void  data(struct student *s)
{
	s->id = 10;
	strcpy(s->name,"loppe");
}

int main()
{
	struct student s;
	struct student *sptr = &s;
	sptr->id = 20;
	strcpy(sptr->name,"karthikk");
	printf("%d\n",s.id);
	printf("%s\n",s.name);

	struct student s1;
	 data(&s1);
	printf("%d\n",s1.id);
	printf("%s\n",s1.name);
}
