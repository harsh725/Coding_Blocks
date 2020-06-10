#include<iostream>
using namespace std;
int main () {
	int  n,sum=0;
	cin>>n;
	n=n-n%5;
	int m=5;
	while(n>=m)
	{
		sum+=(n/m);
		m=m*5;
	}
	cout<<sum;
	return 0;
}