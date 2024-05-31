//link: https://vjudge.net/problem/Gym-287309E/origin

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
	int mx = INT_MAX, index=-1;
	for(int i=1; i<=n; i++)
	{
		int x; cin>>x;
		if(mx>x)
		{
			mx = x;
			index = i;
		}
	}
	cout<<mx<<" "<<index<<endl;
}