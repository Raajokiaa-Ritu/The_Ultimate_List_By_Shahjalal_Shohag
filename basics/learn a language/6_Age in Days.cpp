//link: https://vjudge.net/problem/Gym-287306Q/origin
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
	cout<<(n / 365)<<" years"<<endl;
	n = n % 365;

	cout<<(n / 30)<<" months"<<endl;
	n = n % 30;

	cout<<n <<" days"<<endl;
}
