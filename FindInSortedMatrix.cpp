#include<iostream>
using namespace std;
bool find(int n,int a[4][3],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		cout<<a[i][j]<<"\t";
		}
		cout<<endl;	
	}
	cout<<endl<<endl;	
	
	int low=0;
	int high=r*c-1;
	
	while(low<=high)
	{
		int mid=(low+high)/2;
		int rr=mid/c;
		int cc=mid%c;
		if(a[rr][cc]==n) 
			return true;
		if(a[rr][cc]>n) 
			high=mid-1;	
		if(a[rr][cc]<n)
			 low=mid+1;
	}
	return false;
}
int main()
{
	int a[4][3]={{1,3,5},{7,9,11},{13,15,17},{18,19,22}};
	
	int c=sizeof(a[0])/4;
	int r=sizeof(a)/(4*c);
	
	cout<<find(12,a,r,c);
	return 0;
}
