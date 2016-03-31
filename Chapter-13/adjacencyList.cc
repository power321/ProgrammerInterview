#ifndef ADJACENCY_LIST_H
#define ADJACENCY_LIST_H

#include <cstdio>
#include <cstring>
#include <iostream>

const int MAXN = 1000;
const int MAXM = 10000;
struct node{
	int u,v,num;
	int pre;
}edge[MAXM];

int first[MAXN];
int n,m,cnt;

void insertEdge(int uu, int vv, int nnum)
{
	edge[cnt].u = uu; edge[cnt].v = vv; edge[cnt].num = nnum;
	edge[cnt].pre = first[uu];
	first[uu] = cnt++;
}
int main()
{
	int u, v, num;
	while(std::cin >> n >> m)
	{
		memset(first, -1, sizeof(first));
		cnt = 0;

		while(m--)
		{
			std::cin >> u >> v >> num;
			insertEdge(u, v, num);
		}
		for(int i=1; i<=n; i++)
		{
			for(int j=first[i]; ~j; j=edge[j].pre)
				std::cout << "Edge Num:" << j << " from:" << edge[j].u << " to:" << edge[j].v << " num:" << edge[j].num << std::endl;
		}
	}
	return 0;
}

#endif
