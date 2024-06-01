//link:https://vjudge.net/problem/Gym-287310U/origin
#include<bits/stdc++.h>
using namespace std;
#define ll long long int  

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	ll n,m; cin>>n>>m;

	ll a[n+5], b[m+5];
	for(ll i=0; i< n; i++)cin>>a[i];

	for(ll i=0; i< m; i++)cin>>b[i];

	ll j=0,i=0,result=0;
	while(j<m)
	{
		while(i <n)
		{
			if(b[j] == a[i])
			{
				result++;
				j++;
			}
			i++;
		}
		if(i == n)break;
	}


	if(result == m)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

}