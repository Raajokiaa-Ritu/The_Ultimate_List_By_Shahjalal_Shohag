//link:https://vjudge.net/problem/Gym-293843G/origin
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

	string st; cin>>st;
	for(int i=0; i<st.size(); i++)
	{
		if(st[i] == ',')
		{
			cout<<' ';
		}
		else if(st[i]>='A' and st[i]<='Z')
		{
			printf("%c", tolower(st[i]));
		}
		else{
			printf("%c", toupper(st[i]));
			
		}
	}

}