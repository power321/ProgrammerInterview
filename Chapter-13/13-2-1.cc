#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

struct node
{
	int data;
	node *pre, *next;
};

//Create Double LinkList
node* Create()
{
	node *head, *p, *s;
	head = (node*)malloc(sizeof(node));
	p = head;
	int x;
	while(scanf("%d", &x) != EOF)
	{
		if(x == 0)
			break;
		s = (node*)malloc(sizeof(node));
		s->data = x;
		s->pre = p;
		p->next = s;
		p = s;
	}
	p->next = NULL;
	head = head->next;
	head->pre = NULL;
	return head;
}

//Print Double LinkList
void Print(node *head)
{
	node *p = head;
	while(p != NULL)
	{
		cout << p->data << endl;
		p = p->next;	
	}
}

//Delete
node* Delete(node *head, int num)
{
	if(head == NULL)
		return head;
	node *p1;
	p1 = head;
	while(num != p1->data && p1->next != NULL)
	{
		p1 = p1->next;
	}
	if(num == p1->data)
	{
		if(p1 == head)
		{
			head = p1->next;
			head->pre = NULL;
		}
		else if(p1->next == NULL)
			p1->pre->next = NULL;
		else
		{
			p1->pre->next = p1->next;
			p1->next->pre = p1->pre;
		}
		free(p1);
		p1 = NULL;
	}
	else
		printf("No Num Del\n");
	return head;
}

//Insert
node* Insert(node *head, int num)
{
	if(head == NULL)
		return head;
	node *p, *s;
	p = head;
	s = (node*)malloc(sizeof(node));
	s->data = num;
	while(p->data < s->data && p->next != NULL)
	{
		p = p->next;
	}
	if(p->data >= s->data)
	{
		if(p == head)
		{
			s->next = p;
			s->pre = NULL;
			p->pre = s;
			head = s;
		}
		else
		{
			s->next = p;
			s->pre = p->pre;
			p->pre->next = s;
			p->pre = s;
		}
	}
	else
	{
		p->next = s;
		s->pre = p;
		s->next = NULL;
	}
	return head;
}
int main()
{
	node *head = Create();
	Print(head);
	head = Delete(head, 4);
	head = Insert(head, 7);
	Print(head);
	return 0;
}
