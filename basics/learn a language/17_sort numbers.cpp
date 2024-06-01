//link: https://vjudge.net/problem/Gym-287306S/origin
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

	int a,b,c; 
	cin>>a>>b>>c;
	v.pb(a);
	v.pb(b);
	v.pb(c);
	sort(v.begin(), v.end());

	for(auto it : v)
		cout<<it<<"\n";

	cout<<endl;

	cout<<a<<endl<<b<<endl<<c<<endl;
}