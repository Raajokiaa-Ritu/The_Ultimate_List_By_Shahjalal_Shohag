//link: https://vjudge.net/problem/AtCoder-abc220_a/origin
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

	int a,b,c; cin>>a>>b>>c;

	int check=-1;
	for(int i=a; i<=b; i++)
	{
		if(i % c == 0)
		{
			check = i; break;
		}
	}
	cout<<check<<endl;
}