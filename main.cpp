#include<iostream> 
using namespace std;

int main()
{
	int n;
	int i;
	int result=1;
	long long x=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		result*=i;
		while(result%10==0)
		{
			result/=10;
		}
		result%=1000; 
		cout<<result<<endl;
	}
	result%=10;
	cout<<result;
	return 0;
} 
