//link: https://vjudge.net/problem/Gym-293843D/origin
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

	string a,b; cin>>a>>b;
	cout<<a.size()<<" "<<b.size()<<endl;
	cout<<(a+b)<<endl;
	char x=a[0];
	char y=b[0];
	a[0] = y;
	b[0] = x;
	cout<<a<<' '<<b<<endl;
}