//link:https://vjudge.net/problem/Gym-287309M/origin
#include<bits/stdc++.h>
using namespace std;

int lucky(int n){
	int flag = true;
	while(n>0){
		int mod = n % 10;
		if(mod == 4 or mod == 7){
			flag = true;
		}
		else
		{
			flag = false; break;
		}
		n = n/10;
	}
	return flag;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int a,b, i;
	cin>>a>>b;

	int luck = -1;
	for(i = a; i <= b; i++)
	{
		if(lucky(i) == true)
		{
			luck = 1;
			cout<<i<<" ";
		}
	}
	if(luck == -1)cout<<-1<<endl;

}