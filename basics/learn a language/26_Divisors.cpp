//link:https://vjudge.net/problem/Gym-287309K/origin
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

	int n; cin>>n;
	for(int i=1; i<=sqrt(n); i++)
	{
		if(n % i == 0)
		{
			v.pb(i);
			if(i != (n/i))v.pb(n/i);
		}
	}
	sort(v.begin(), v.end());
	for(auto it: v)cout<<it<<endl;;
}