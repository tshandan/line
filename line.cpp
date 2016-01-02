#include<stdio.h>
struct student
{
	char name[100];
	int num;
	student *next;
} ;
int main()
{
	int i;
	student *p,*q,*head;
	head=new student;
	head->next =0;
	p=head;
	for(i=0;i<4;i++)
	{
		q=new student;
		p->next=0;
		q->next=0;
		//cin>>q->name>>&(q->num);
		scanf("%s %d ",q->name,&(q->num));
		p=q;
	}
	p=head->next;
	while(p!=0)
	{
		//cout<<p->name<<p->num<<p<<endl;
		printf("%s %d p=%s\n",p->name,p->num,p);
		p=p->next;
	}
	return 0;
}
