//link: https://vjudge.net/problem/Gym-287310F/origin

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

	for(int i =0; i < n; i++)
	{
		cin>>arr[i];
	}
	for(int i=n-1; i>=0; i--)
		cout<<arr[i]<<' ';
}