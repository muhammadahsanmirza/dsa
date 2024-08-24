#include<iostream>
using namespace std;
int main()
{
	const int max=50;
	int arr[max]={9,3,5,2,8,10,1,78,7};
	int ub=8;
	int key;
	for(int i=0;i<=ub;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	int j=0;
	for(int i=1;i<=ub;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>=key)
		{
			arr[j+1]=arr[j];
			cout<<endl;
			for(int i=0;i<=ub;i++)
			{
				cout<<arr[i]<<"\t";
			}
			cout<<endl;
			--j;
		}
		arr[j+1]=key;
		for(int i=0;i<=ub;i++)
			{
				cout<<arr[i]<<"\t";
			}
			cout<<endl;
	}
	
	cout<<endl;
	
	for(int i=0; i<=ub; i++)
	{
		cout<<arr[i]<<"\t";
	}
 return 0;
}

