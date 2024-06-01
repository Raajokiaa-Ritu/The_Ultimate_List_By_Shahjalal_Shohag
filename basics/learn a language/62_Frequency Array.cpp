//link: https://vjudge.net/problem/Gym-287310V/origin
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

	int n,m;
	map<int,int>mp;
	cin>>n>>m;

	for(int i=1;i<=n;i++)
	{
		int x; cin>>x;
		mp[x]++;
	}
	for(int i=1; i<=m; i++)
	{
		cout<<mp[i]<<endl;
	}
}