//link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C
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

	int t,n,i,f;


    cin>>n;
    if( n % 2 == 1)
    {
    	    string st = "",st1;
		    while(n>0)
		    {
		        if(n % 2 ==0)st = '0'+st;
		        else st = '1' + st;
		        n /= 2;
		    }
		    st1 = st;
		    reverse(st1.begin(), st1.end());    
		    if(st == st1)cout<<"YES"<<endl;
		    else cout<<"NO"<<endl;    
    }   
    else
    	cout<<"NO"<<endl; 
    


}