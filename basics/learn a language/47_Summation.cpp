//link: https://vjudge.net/problem/Gym-287310A/origin
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
	int n;
	cin>>n;

	long long int sum=0;
	while(n--)
	{
		int x; cin>>x;
		sum += x;
	}
	cout<<abs(sum)<<endl;
}