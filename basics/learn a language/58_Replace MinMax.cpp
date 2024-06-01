//link: https://vjudge.net/problem/Gym-287310M/origin
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
	int arr[n+5];
	int mx = INT_MIN;
	int mn = INT_MAX;

	for(int i =1; i<=n; i++)
	{
		cin>>arr[i];
		mx = max(arr[i], mx);
		mn = min(arr[i], mn);
	}

	for(int i =1; i<=n; i++)
	{
		if(arr[i] == mx)
		{
			cout<<mn<<' ';
		}
		else if(arr[i] == mn)
		{
			cout<<mx<<' ';
		}
		else
		{
			cout<<arr[i]<<' ';
		}
	}
}