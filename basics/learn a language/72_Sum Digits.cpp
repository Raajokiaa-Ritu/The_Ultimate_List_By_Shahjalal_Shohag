//link: https://vjudge.net/problem/Gym-287310K/origin
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
	string st; cin>>st;
	int sum=0;

	for(int i =0; i<st.size(); i++)
	{
		sum+= (st[i]-'0');
	}
	cout<<sum<<endl;
}