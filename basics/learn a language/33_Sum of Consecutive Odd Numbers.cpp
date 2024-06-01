//link: https://vjudge.net/problem/Gym-287309S/origin

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

	int n,m,sum=0;
	int t; cin>>t;
	while(t--)
	{
		sum=0;
		cin>>n>>m;
		for(int i=min(n,m)+1; i< max(n,m); i++)
		{
			if(i % 2==1)
			sum += i;
		}
		cout<<sum<<endl;
	}

}