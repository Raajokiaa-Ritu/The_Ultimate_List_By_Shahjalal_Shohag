//link: https://vjudge.net/problem/Gym-287306L/origin
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
	char ch;
	cin>>ch;

	if(ch>='A' and ch<='Z')
	{
		cout<<"ALPHA\nIS CAPITAL"<<endl;
	}
	else if(ch>='a' and ch<='z'){
		cout<<"ALPHA\nIS SMALL"<<endl;
	}
	else
	{
		cout<<"IS DIGIT\n";
	}
}