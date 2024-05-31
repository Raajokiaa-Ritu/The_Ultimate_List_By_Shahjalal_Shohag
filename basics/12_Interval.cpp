//link: https://vjudge.net/problem/Gym-287306R/origin
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

	//[0,25], (25,50], (50,75], (75,100]
	double d;
	cin>>d;

	if(d>=0 and d<=25)
		cout<<"Interval [0,25]\n";
	else if(d>25 and d<=50)
		cout<<"Interval (25,50]\n";
	else if(d>50 and d<=75)
		cout<<"Interval (50,75]\n";
	else if(d>75 and d<=100)
		cout<<"Interval (75,100]\n";
	else
		cout<<"Out of Intervals\n";
}