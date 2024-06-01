//link:https://vjudge.net/problem/Gym-287310P/origin
#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int i,j,n,m,e,s;
vector<int>v;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n; cin>>n; int arr[n+5];
	int ans = INT_MAX;
	for(int i=1; i<=n; i++)
	{
		int c = 0, x; cin>>x;
		while(x % 2 ==0)
		{
			c++;
			x = x/2;
		}
		ans = min(ans,c);
	}
	cout<<ans<<endl;


}