//link:https://vjudge.net/problem/Gym-287306X/origin
#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	long long int a,b,c,d,x,y;

	cin>>a>>b>>c>>d;

	x = ((a%100) * (b%100)) % 100;
	y = ((c%100) * (d%100)) % 100;


	printf("%02ld\n", ((x%100) * (y%100)) % 100);
}