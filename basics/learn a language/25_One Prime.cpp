//link:https://vjudge.net/problem/Gym-287309H/origin
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
	if(n==1)cout<<"NO\n";
	else if(n==2)cout<<"YES\n";
	else if(n % 2 == 0 and n!= 2) cout<<"NO\n";
	else
	{
		bool flag = true;
		for(int i=3; i < n ; i+=2)
		{
			if(n % i == 0)
			{
				cout<<"NO\n";
				flag = false; break;
			}
		}
		if(flag == true)cout<<"YES\n";
	}	
}