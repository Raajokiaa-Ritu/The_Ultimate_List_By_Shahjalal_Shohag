//link: https://vjudge.net/problem/Gym-287306M/origin
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
		printf("%c\n", tolower(ch));
	}
	else
	{
		printf("%c\n", toupper(ch));
	}
}