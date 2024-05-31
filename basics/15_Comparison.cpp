//link: https://vjudge.net/problem/Gym-287306U/origin

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

	int a,b;
	char ch;

	cin>>a>>ch>>b;

	if(ch == '>')
	{
		if(a>b)cout<<"Right\n";
		else cout<<"Wrong\n";
	}
	else if(ch == '<')
	{
		if(a<b)cout<<"Right\n";
		else cout<<"Wrong\n";		
	}
	else
	{
		if(a == b)cout<<"Right\n";
		else cout<<"Wrong\n";	
	}
}