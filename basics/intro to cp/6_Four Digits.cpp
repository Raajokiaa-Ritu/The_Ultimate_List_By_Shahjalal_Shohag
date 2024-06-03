//link: https://vjudge.net/problem/AtCoder-abc222_a/origin
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

	string st;
	cin>>st;

	if(st.size() == 4)
	{
		cout<<st<<endl;
	}
	else if(st.size() == 3)
	{
		cout<<"0"+st<<endl;
	}
	else if(st.size() == 2)
	{
		cout<<"00"+st<<endl;
	}
	else
	{
		cout<<"000"+st<<endl;
	}

}