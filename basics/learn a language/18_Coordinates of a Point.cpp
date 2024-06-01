//link: https://vjudge.net/problem/Gym-287306P/origin
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

	double x, y;
	cin>>x>>y;
	if(x>0 and y>0)cout<<"Q1"<<endl;
	else if(x<0 and y>0)cout<<"Q2"<<endl;
	else if(x<0 and y<0)cout<<"Q3"<<endl;
	else if(x>0 and y<0)cout<<"Q4"<<endl;
	else if(x ==0 and y==0)
		cout<<"Origem\n";
	else if(x==0 and y!=0)
		cout<<"Eixo Y\n";
	else if(x !=0 and y == 0)
		cout<<"Eixo X\n";
}