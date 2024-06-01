//link: https://vjudge.net/problem/Gym-287310Q/origin
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
		int ans=0;
		for(int sp=1; sp<=n; sp++)
		{
			for(int ep=sp; ep<= n; ep++)
			{
				int cnt = 0;
				for(int k = sp; k<ep; k++)
				{
					//cout<<arr[k]<<" ";
					if(arr[k] <= arr[k+1])
					{
						cnt++;
					}
					else
					{
						cnt = -1; break;
					}
				}
				if(cnt != -1)
					ans++;
				
			}
		}
		cout<<ans <<endl;
	}
}