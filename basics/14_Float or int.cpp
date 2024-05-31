//link: https://vjudge.net/problem/Gym-287306T/origin
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

	float value;
	cin>>value;

	int i = value;

	if(i == value)
		cout<<"int "<<i<<endl;
	else
		printf("float %d %f\n",i, (value - i));



}