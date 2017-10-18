#include<iostream>
using namespace std;
int duplicate(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		while(arr[i]!=i)
		{
			if(arr[i]<0 || arr[i]>n-1)
			{
			cout<<"Invalid numbers.";
			return -1;	
			}
			
			if(arr[i]==arr[arr[i]])
				return arr[i];
				
			int temp;
			temp=arr[i];
			arr[i]=arr[temp];
			arr[temp]=arr[i];
		}
	}
	cout<<"No dumplicates.";
}
int main()
{
	int a[]={2,1,2,3,1};
	int n=sizeof(a)/4;
	cout<<duplicate(a,n);
	return 0;
}
