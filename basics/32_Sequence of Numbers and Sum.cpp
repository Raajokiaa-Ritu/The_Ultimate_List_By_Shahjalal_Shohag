//link: https://vjudge.net/problem/Gym-287309R/origin
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

	while(1)
	{
		int n,m;
		int sum=0;
		cin>>n>>m;

		if(n<= 0 or m<=0)break;

		for(int i = min(n,m); i<= max(n,m); i++)
		{
			cout<<i<<' ';
			sum+=i;
		}cout<<"sum ="<<sum<<endl;
	}

}