//link: https://vjudge.net/problem/Gym-287306V/origin
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
	long long int a,b,c;
	char x,y;
	cin>>a>>x>>b>>y>>c;

	if(x == '+')
	{
		if(a+b == c)cout<<"Yes\n";
		else cout<<(a+b)<<endl;
	}
	else if(x == '-')
	{
		if(a-b == c)cout<<"Yes\n";
		else cout<<(a-b)<<endl;		
	}
	else
	{
		if(a*b == c)cout<<"Yes\n";
		else cout<<(a*b)<<endl;
	}
}