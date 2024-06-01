//link: https://vjudge.net/problem/Gym-287310L/origin
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
		int n; cin>>n;
		int arr[n+5];
		for(int i =1; i<=n; i++)
		{
			cin>>arr[i];
		}
		for(int sp=1; sp<=n; sp++)
		{
			for(int ep=sp; ep<= n; ep++)
			{
				int mx = INT_MIN;
				for(int k = sp; k<=ep; k++)
				{
					//cout<<arr[k]<<" ";
					mx = max(mx, arr[k]);
				}
				cout<<mx<<' ';
			}
		}
		cout<<endl;
	}
}