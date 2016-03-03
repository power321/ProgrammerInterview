#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

struct node
{
	int data;
	node *next;
};

struct stack
{
	node *rear, *first;
};

//Push
stack* push(stack *S, int num)
{
	node *p = (node*)malloc(sizeof(node));
	p->data = num;
	p->next = NULL;

	if(S->first == NULL)
	{
		S->rear = p;
		S->first = p;
	}
	else
	{
		S->rear->next = p;
		S->rear = p;
	}
	cout << "In Push " << S->rear->data << endl;
	return S;
}

//Pop
stack* pop(stack *S)
{
	node *p, *q;

	if(S->rear == NULL)
	{
		cout << "Empty" << endl;
		return S;
	}
	p = S->rear;
	cout << "In Pop " << p->data << endl;
	if(S->first == S->rear)
	{
		S->first = NULL;
		S->rear = NULL;
	}
	else
	{
		q = S->first;
		while(q->next != S->rear)
			q = q->next;
		S->rear = q;
		S->rear->next = NULL;
	}
	free(p);
	p = NULL;
	return S;
}
int main()
{
	stack *S = (stack*)malloc(sizeof(stack));
	S->rear = NULL;

	for(int i=0; i<5; ++i)
		S = push(S, i);
	for(int i=0; i<5; ++i)
		S = pop(S);
	return 0;
}
