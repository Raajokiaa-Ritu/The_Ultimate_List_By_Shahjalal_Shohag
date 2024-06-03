//link:https://vjudge.net/problem/Gym-293843J/origin
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
	string st; 
	cin>>st;
	map<char, int>mp;
	for(int i=0; i<st.size(); i++)
	{
		mp[st[i]]++;
	}
	for(auto it: mp)
	{
		cout<<it.first<<" : "<<it.second<<endl;
	}
}