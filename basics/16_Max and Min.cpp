//link: https://vjudge.net/problem/Gym-287306J/origin
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

	int a,b,c;
	cin>>a>>b>>c;

	cout<<min(a, min(b,c))<<" "<<max(a,max(b,c))<<endl;
}