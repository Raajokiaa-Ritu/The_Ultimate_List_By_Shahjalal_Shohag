//link:https://vjudge.net/problem/Gym-287309T/origin
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

	int n;cin>>n;
	int count=1;
	for(int i =1; i<=n; i++)
	{
		for(int space = i; space<= n-1; space++)
		{
			cout<<" ";
		}
		for(int j = 1; j<= count; j++)
		{
			cout<<"*";
		}
		cout<<endl;
		count += 2;
	}
}