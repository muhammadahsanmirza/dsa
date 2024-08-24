#include<iostream>
using namespace std;
int main()
{
	const int size=50;
	int arr[size]={4,6,9,2,3,6,8};
	int ub=6;
	cout<<"\nArray before sorting is:"<<endl;
	for(int i=0;i<=ub;i++)
	{
		cout<<arr[i]<<"\t";					//displaying values of sorted array
	}
	int max;
	for(int i=0;i<ub;i++)
	{
		max=i;
		for(int j=i+1;j<=ub;j++)
		{
			if(arr[j]>arr[max])
			{
				max=j;
			}
		}
		if(max!=i)
		{
			swap(arr[i],arr[max]);
		}
	}
	cout<<"\nArray after descending sorting is:"<<endl;
	for(int i=0;i<=ub;i++)
	{
		cout<<arr[i]<<"\t";					//displaying values of sorted array
	}

 return 0;
}

