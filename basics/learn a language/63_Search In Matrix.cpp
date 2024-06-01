//link: https://vjudge.net/problem/Gym-287310S/origin
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

	string ans ="will take number";

	int n,m,x; cin>>n>>m;
	for(int i = 1; i<= (n*m); i++)
	{
		int value; cin>>value;
		v.pb(value);
	}

	cin>>x;

	for(int i=1; i<=v.size();i++)
	{
		if(v[i] == x)
		{
			ans="will not take number";
			break;
		}
	}
	cout<<ans<<endl;
}