//link: https://vjudge.net/problem/Gym-287310T/origin

#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int i,j,n,m,e,s;
vector<int>v;
int a[105][105];
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int n; 
	cin>>n;

	for(int i=1; i<= n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			cin>>a[i][j];
		}
	}

	int sum1=0;
	for(int i = 1;i<=n;i++)
		sum1+=a[i][i];

	int sum2=0, cnt = n;  
	for(int i = 1; i<=n; i++)
	{
		//cout<<a[i][cnt]<<' ';
		sum2 += a[i][cnt];
		cnt--;
	}

	//cout<<sum1<<' '<<sum2<<endl;
	cout<<abs(sum1- sum2)<<endl;






}