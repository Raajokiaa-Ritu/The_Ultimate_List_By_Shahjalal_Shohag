//link: https://vjudge.net/problem/Gym-287309J/origin
#include<bits/stdc++.h>
using namespace std;

int isprime(int n)
{
	if(n==1)return false;
	else if(n==2)return true;
	else if(n % 2 == 0 and n!= 2) return false;
	else
	{
		for(int i=3; i < n ; i+=2)
		{
			if(n % i == 0)
			{
				return false;
			}
		}
		return true;
	}	
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n; cin>>n;
	if(n>=2)cout<<2<<' ';
	for(int i = 3 ; i <= n; i++)
	{
		if(isprime(i) == true)cout<<i<<" ";
	}
}