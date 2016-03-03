#include <stdio.h>
#include <string.h>

int main()
{
	char uu[20], *p, *sub="ask", *str="askdaskaskdaskgasb", *str2;
	int n=0, i=0, v;
	
	while(*str)
	{
		str2 = sub;
		int flag = 0;
		while(*str2)
		{
			if(*str2 == *str)
			{
				flag = 1;
				break;
			}
			str2++;
		}
		if(flag == 0)
		{
			uu[i] = *str;
			i++;
		}
		str++;
	}
	for(int j=0; j<i; j++)
		printf("%c", uu[j]);
	puts("");
	return 0;
}
