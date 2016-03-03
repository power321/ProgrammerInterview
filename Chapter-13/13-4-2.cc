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

struct myqueue
{
	node *first, *rear;
}*QQ;

//Push Node
myqueue* push(myqueue *Q, int num)
{
	node *s;
	s = (node*)malloc(sizeof(node));
	s->data = num;
	s->next = NULL;

	if(Q->rear == NULL)
	{
		Q->rear = s;
		Q->first = s;
	}
	else
	{
		Q->rear->next = s;
		Q->rear = s;
	}
	cout << Q->rear->data << endl;
	return Q;
}

//Pop Node
myqueue* pop(myqueue *Q)
{
	if(Q->first == NULL)
	{
		cout << "Empty Queue" << endl;
		return Q;
	}
	node *p = Q->first;
	int num = p->data;
	cout << num << endl;

	if(Q->first == Q->rear)
	{
		Q->first = NULL;
		Q->rear = NULL;
	}
	else
		Q->first = Q->first->next;
	free(p);
	return Q;
}

int main()
{
	QQ = (myqueue*)malloc(sizeof(myqueue));
	QQ->rear = NULL;
	QQ->first = NULL;
	cout << "Init" << endl;
	for(int i=0; i<5; ++i)
		QQ = push(QQ, i);
	for(int i=0; i<5; ++i)
		QQ = pop(QQ);
	return 0;
}
