//link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

ll power(ll x, ll n){
	ll ans = 1;
	while(n--)
	{
		ans = ans*x;
	}
	return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	ll x,n;
	cin>>x>>n; 

	ll sum = 0;
	for(int i =2; i<=n; i+=2)
	{
		sum += power(x,i);
	}
	cout<<sum<<endl;

}