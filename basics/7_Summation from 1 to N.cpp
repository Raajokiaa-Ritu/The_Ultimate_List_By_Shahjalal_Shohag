//link: https://vjudge.net/problem/Gym-287306F
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

	long long int n,sum=0;
	cin>>n;

	sum = n * (n+1);

	cout<<(sum/2)<<endl;
}