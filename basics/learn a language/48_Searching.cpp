//link:https://vjudge.net/problem/Gym-287310B/origin
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


		int n; cin>>n;
		int arr[n+5];

		int index=-1;
		for(int i =0; i< n; i++)
		{
			cin>>arr[i];
		}
		int x;
		cin>>x;
		for(int i =0; i< n; i++)
		{
			if(arr[i] == x)
			{
				index = i; break;
			}
		}
		cout<<index<<endl;
	

}