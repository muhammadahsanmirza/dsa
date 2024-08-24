#include<iostream>
using namespace std;
int main()
{
	const int max=50;
	int arr[max]={54,35,20,70,42,11,25};
	int lb=0,ub=6;
	cout<<"Current Array is"<<endl;
	for(lb=0;lb<=ub;lb++)
	{
		cout<<arr[lb]<<"\t";	
	}
	cout<<endl;
	for(int i=0;i<ub;i++)
	{
		for(int j=0;j<=ub-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
//				int temp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=temp;
				swap(arr[j],arr[j+1]);
			}
		}	
		
	}
	cout<<"Sorted Array is"<<endl;
	for(int i=0;i<7;i++)
	{
		cout<<arr[i]<<"\t";	
	}
	cout<<endl;
		
 return 0;
}

