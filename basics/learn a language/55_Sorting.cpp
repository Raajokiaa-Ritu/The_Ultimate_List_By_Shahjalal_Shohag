//link: https://vjudge.net/problem/Gym-287310H/origin

#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int n;
	cin>>n;
	int arr[n+5];

	for(int i =0 ; i < n; i++)
	{
		cin>>arr[i];
	}
	sort(arr, arr+n);
	for(int i =0 ; i < n; i++)
	{
		cout<<arr[i]<<' ';
	}


}