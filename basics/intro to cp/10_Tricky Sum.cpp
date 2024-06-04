//link: https://vjudge.net/problem/CodeForces-598A/origin
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int 


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int t; cin>>t; 
	while(t--)
	{
		ll n; cin>>n;
		ll ans = (n * (n+1)) / 2;
		//cout<<"ans : "<<ans<<endl;
		ll i=0;
		while(pow(2,i) <= n)
		{
			//cout<<"pow(2,i): "<<pow(2,i)<<endl; 
			ll val =  pow(2,i);
			ans = ans-val-val;
			i++;
		}
		cout<<ans<<endl;
	}
}