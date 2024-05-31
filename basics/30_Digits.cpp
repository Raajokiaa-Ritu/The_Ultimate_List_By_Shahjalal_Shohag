//link: https://vjudge.net/problem/Gym-287309Q/origin
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
	int n; cin>>n;
	while(n--)
	{
		string st;
		cin>>st;

		for(int i = st.size() -1 ; i>=0; i--)
		{
			cout<<st[i]<<' ';
		}cout<<endl;
	}
}