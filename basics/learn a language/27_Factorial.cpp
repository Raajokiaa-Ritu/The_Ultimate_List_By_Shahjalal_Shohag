//link:https://vjudge.net/problem/Gym-287309G/origin
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

	int t,c;
	cin>>t;
	while(t--)
	{
		int n; cin>>n;
		long long int fact=1;
		for(int i=2; i<= n; i++)
		{
			fact = fact * i;
		}
		cout<<fact<<endl;
	}
}