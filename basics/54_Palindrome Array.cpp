//link: https://vjudge.net/problem/Gym-287310G/origin

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
	int arr[n+5],rra[n+5];

	for(int i =1 ; i <= n; i++)
	{
		cin>>arr[i];
	}
	int cnt=1;
	for(int i=n; i>=1; i--)
	{
		rra[cnt] = arr[i];
		cnt++;
	}

	string ans = "YES";
	for(int i=1; i<=n; i++)
	{
		if(arr[i] != rra[i])
		{
			ans = "NO"; break;
		}
	}
	cout<<ans<<endl;

}