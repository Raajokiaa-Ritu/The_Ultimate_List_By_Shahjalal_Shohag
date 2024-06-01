//link: https://vjudge.net/problem/Gym-287309U/origin
#include<bits/stdc++.h>
using namespace std;


int sumOfDigits(int n)
{
	int sum=0;
	while(n >0)
	{
		sum += n % 10;
		n = n/10;
	}
	return sum;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int n, a,b,sum=0;
	cin>>n>>a>>b;

	for(int i = 1; i<= n; i++)
	{
		if(sumOfDigits(i)>=a and sumOfDigits(i)<= b)
		{
			sum += i;
		}
	}
	cout<<sum<<endl;

}