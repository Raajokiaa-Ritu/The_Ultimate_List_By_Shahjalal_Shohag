//link: https://vjudge.net/problem/Gym-293843I/origin
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
	string a,b; cin>>a;
	b = a;
	reverse(b.begin(), b.end());
	if(a == b)cout<<"YES\n";
	else cout<<"NO\n";
}