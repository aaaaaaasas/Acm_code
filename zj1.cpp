#include<iostream>
#include<string.h>
using namespace std;
const int maxn = 1e4 + 10;
int a[maxn];
int main()
{
	int n;
	while(cin >> n)
	{
		if(n == 0) break;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int ans = a[0], cnt = 1, res = 1;
		for(int i = 1; i < n; i++)
		{
			if(a[i] == a[i-1])
			{
				cnt++;
				if(cnt > res)
				{
					ans = a[i];
					res = cnt;
				}
			}
			else
			{
				cnt = 1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}