//link:https://vjudge.net/problem/Gym-287306O/origin
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
	string st; cin>>st;
	int check = st[0] - '0';
	if(check % 2 ==0)
		cout<<"EVEN\n";
	else cout<<"ODD\n";
}