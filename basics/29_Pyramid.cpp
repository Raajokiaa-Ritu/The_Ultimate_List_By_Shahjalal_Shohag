//link: https://vjudge.net/problem/Gym-287309O/origin
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
	for(int i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			cout<<"*";
		}cout<<endl;
	}
}