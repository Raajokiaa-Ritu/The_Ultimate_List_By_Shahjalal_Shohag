//link: https://vjudge.net/problem/Gym-287310R/origin
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
	vector<int>a,b;
	for(int i = 0; i < n; i++)
	{
		int x; cin>>x; 
		a.pb(x);
	}
	for(int i = 0; i < n; i++)
	{
		int x; cin>>x; 
		b.pb(x);
	}	

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	if(a == b)cout<<"yes\n";
	else cout<<"no\n";
}