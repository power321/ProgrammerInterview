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

//Delete Num In List
node* Delete(node *head, int num)
{
	node *p1, *p2;
	p1 = head;
	while(p1->data != num && p1->next != NULL)
	{
		p2 = p1;
		p1 = p1->next;
	}
	if(p1->data == num)
	{
		if(p1 == head)
		{
			head = p1->next;
		}
		else
		{
			p2->next = p1->next;
		}
		free(p1);
		p1 = NULL;
	}
	else
		cout << "Not Found Num" << endl;
	return head;
}

//Insert Num To List
node* Insert(node *head, int num)
{
	node *p1, *p2;
	p1 = head;
	node *p0 = (node*)malloc(sizeof(node));
	p0->data = num;
	while(p1->data < p0->data && p1->next != NULL)
	{
		p2 = p1;
		p1 = p1->next;
	}
	if(p1->data >= p0->data)
	{
		if(p1 == head)
		{	
			p0->next = p1;
			head = p0;
		}
		else
		{
			p0->next = p1;
			p2->next = p0;
		}
	}
	else
	{
		p1->next = p0;
		p0->next = NULL;
	}
	return head;
}

//Sort List
node* Sort(node *head)
{
	node *p1, *p2;
	int i, j, temp;
	if(head == NULL || head->next == NULL)
		return head;
	int len = Length(head);
	for(j=1; j<len; ++j)
	{
		p1 = head;
		for(i=0; i<len-j; ++i)
		{
			if(p1->data > p1->next->data)
			{
				temp = p1->data;
				p1->data = p1->next->data;
				p1->next->data = temp;
			}
			p1 = p1->next;
		}
	}
	return head;
}

//Reverse List
node* Reverse(node *head)
{
	if(head == NULL || head->next == NULL)
		return head;
	
	node *p1, *p2, *p3;
	p1 = head; p2 = head->next;
	while(p2)
	{
		p3 = p2->next;
		p2->next = p1;
		p1 = p2;
		p2 = p3;
	}
	head->next = NULL;
	head = p1;
	return head;
}

int main()
{
	node *head = Create();
	cout << "First len = " << Length(head) << endl;
	cout << "First ---------------";
	Print(head);
	cout << "First ---------------";
	head = Delete(head, 4);
	head = Insert(head, 7);

	cout << "Del&Ins ---------------";
	Print(head);
	cout << "Del&Ins ---------------";
	head = Sort(head);
	cout << "Sort ---------------";
	Print(head);
	cout << "Sort ---------------";

	cout << "Reverse ---------------";
	head = Reverse(head);
	Print(head);
	cout << "Reverse ---------------";
	return 0;
}
