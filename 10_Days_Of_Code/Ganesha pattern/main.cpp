#include<iostream>
using namespace std;
int main() {
	int n;
	std::cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int  j=1;j<=n;j++)
		{
			if(i==n/2+1 || j==n/2+1)
			cout<<"*";
			else if((i<=n/2 && j==1) || (i>n/2 && j==n))
			cout<<"*";
			else if((j<=n/2 && i==n) || (j>n/2 && i==1))
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
