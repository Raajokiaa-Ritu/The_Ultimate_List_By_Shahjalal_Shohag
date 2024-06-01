//link: https://vjudge.net/problem/Gym-287306G/origin
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
	double a,b; cin>>a>>b;
	cout<<"floor "<<a<<" / "<<b<<" = "<<floor(a/b)<<endl;
	cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(a/b)<<endl;
	cout<<"round "<<a<<" / "<<b<<" = "<<round(a/b)<<endl;
}