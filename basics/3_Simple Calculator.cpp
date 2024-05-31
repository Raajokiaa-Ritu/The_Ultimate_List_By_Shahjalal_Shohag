//link: https://vjudge.net/problem/Gym-287306C/origin

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

	int x,y;
	cin>>x>>y;
	cout<<x<<" + "<<y<<" = "<<(x+y)<<endl;
	cout<<x<<" * "<<y<<" = "<<(x*y)<<endl;
	cout<<x<<" - "<<y<<" = "<<(x-y)<<endl;
}