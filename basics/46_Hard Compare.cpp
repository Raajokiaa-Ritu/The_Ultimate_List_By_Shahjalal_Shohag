//link: https://vjudge.net/problem/Gym-287306Y/origin
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	ll a,b,c,d; 
	cin>>a>>b>>c>>d;

	if((b*log(a)-d*log(c)) >0 )
		cout<<"YES\n";
	else cout<<"NO\n";
}