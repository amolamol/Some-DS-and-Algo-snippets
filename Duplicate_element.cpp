#include<iostream>
using namespace std;
int duplicate(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0 || arr[i]>n-2)
		{
		cout<<"Invalid numbers.";
		return -1;	
		}	
		sum+=arr[i];
	}
	
	int sum2=(n-2)*(n-1)>>1;
	return sum-sum2;
}
int main()
{
	int a[]={0,1,2,3,1};
	int n=sizeof(a)/4;
	cout<<duplicate(a,n);
	return 0;
}
