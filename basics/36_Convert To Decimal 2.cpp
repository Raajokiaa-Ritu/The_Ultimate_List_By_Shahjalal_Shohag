//link: https://vjudge.net/problem/Gym-287309X/origin
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
	int t; cin>>t;
	while(t--)
	{
		int n;cin>>n; 
		int ans = __builtin_popcount(n);
		int sum=0;
		for(int i=0; i<ans; i++)
		{
			sum += pow(2,i);
		}
		cout<<sum<<endl;
	}
}