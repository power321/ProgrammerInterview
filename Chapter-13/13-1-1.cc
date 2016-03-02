#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

//Create List
node* Create()
{
	node *head, *p, *s;
	int x, flag=1;
	head = (node*)malloc(sizeof(node));
	p = head;
	while(flag)
	{
		scanf("%d", &x);
		if(x != 0)
		{
			s = (node*)malloc(sizeof(node));
			s->data = x;
			p->next = s;
			p = s;
		}
		else
			flag = 0;
	}
	p->next = NULL;
	free(head);
	head = head->next;
	cout << head->data << endl;
	return head;
}

//Get List Length
int Length(node *head)
{
	int n = 0;
	node *p;
	p = head;
	while(p != NULL)
	{
		++n;
		p = p->next;
	}
	return n;
}

//Print List
void Print(node *head)
{
	node *p;
	p = head;
	while(p != NULL)
	{
		cout << p->data << endl;
		p = p->next;
	}
}

int main()
{
	node *head = Create();
	cout << Length(head) << endl;
	Print(head);
	return 0;
}
