//link: https://vjudge.net/problem/Gym-287310I/origin
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int  

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
		int n,i,j; cin>>n;
		int arr[n+5];

		int sum = INT_MAX;

		for(int i =1; i<=n; i++)
		{
			cin>>arr[i];
		}
		for(i =1; i<n; i++)
		{
			for(j = i+1; j<=n; j++)
			{
				sum = min(sum, (arr[i] + arr[j] + j - i));
			}
		}
		cout<<sum<<endl;
	}
}