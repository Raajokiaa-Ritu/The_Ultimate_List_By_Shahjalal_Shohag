//link: https://vjudge.net/problem/Gym-287310C/origin

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
	for(int i=1; i<=n; i++)
	{
		int x; cin>>x;
		if(x>0)cout<<1<<" ";
		else if(x<0)cout<<2<<" ";
		else cout<<0<<" ";
	}
}