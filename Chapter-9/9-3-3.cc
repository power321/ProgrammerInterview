#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
vector<int> v;
bool used[10];
int dfs(int pos, int num)
{
	if(pos && num%pos != 0)
		return 0;
	if(pos == 9)
	{
		v.push_back(num);
		return 1;
	}
	int ans = 0;
	for(int i=1; i<=9; ++i)
	{
		if(used[i] == false)
		{
			used[i] = true;
			ans += dfs(pos+1, num*10+i);		
			used[i] = false;
		}
	}
	return ans;
}
int main()
{
	v.clear();
	memset(used, false, sizeof(used));
	int ans = dfs(0,0);
	cout << ans << endl;
	for(int i=0; i<ans; ++i)
		cout << v.at(i) << endl;
	return 0;
}
