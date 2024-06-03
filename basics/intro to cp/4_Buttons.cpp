//link: https://vjudge.net/problem/AtCoder-abc124_a/origin
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

	int a,b; cin>>a>>b;

	cout<<max(a+(a-1), max(b+(b-1), a+b))<<endl;
}