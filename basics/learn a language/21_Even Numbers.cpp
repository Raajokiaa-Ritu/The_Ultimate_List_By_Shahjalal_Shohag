//link: https://vjudge.net/problem/Gym-287309B/origin
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
	int n;
	cin>>n;
	if(n==1)cout<<-1<<endl;
	for(i = 1; i<=n; i++)
	{
		if(i % 2 ==0)cout<<i<<endl;
	}
}