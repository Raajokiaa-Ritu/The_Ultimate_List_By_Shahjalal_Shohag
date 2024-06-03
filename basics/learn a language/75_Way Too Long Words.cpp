//link:https://vjudge.net/problem/Gym-293843F/origin
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
	int t; cin>>t;
	while(t--)
	{
		string st; cin>>st;
		if(st.size() <= 10)
			cout<<st<<endl;
		else
		{
			cout<<st[0]<<(st.size()-2)<<st[st.size()-1]<<endl;
		}
	}
}