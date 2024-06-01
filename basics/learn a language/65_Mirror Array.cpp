//link: https://vjudge.net/problem/Gym-287310W/origin
#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int i,j,n,m,e,s;
vector<int>v;
int a[105][105];

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int n,m; cin>>n>>m;

	for(int i=1; i<= n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			cin>>a[i][j];
		}
	}

	for(int i=1; i<= n; i++)
	{
		for(int j=m; j >= 1; j--)
		{
			cout<<a[i][j]<<" ";
		}cout<<endl;
	}	
}