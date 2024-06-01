//link:https://vjudge.net/problem/Gym-287309C/origin
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
	int even = 0, odd=0,positive=0, negative=0;
	for(int i =1; i<=n; i++)
	{
		int x; 
		cin>>x;
		if(x % 2==0)even++;
		if(abs(x) % 2==1)odd++;
		if(x>0)positive++;
		if(x<0)negative++;
	}
	cout<<"Even "<<even<<endl;
	cout<<"Odd "<<odd<<endl;
	cout<<"Positive "<<positive<<endl;
	cout<<"Negative "<<negative<<endl;
}