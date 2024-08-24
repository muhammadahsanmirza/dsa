#include<iostream>
using namespace std;
int BinarySearch(int *arr,int element, int low,int high)
{
	int mid;
	if(low>high)
	{
		return -1;
	}
	else
	{
		int mid=(low+high)/2;
			if(element==arr[mid])
			{
				return mid;
			}
			else if(element>arr[mid])
			{
				BinarySearch(arr,element,mid+1,high);
			}
			else
			{
				BinarySearch(arr,element,low,mid-1);				
			}
	}
}
int main()
{
	int element;
	int lb=0,ub=4;
	int arr[5]={4,5,6,7,8};
	cout<<"Current Array is"<<endl;
	for(lb=0;lb<=ub;lb++)
	{
		cout<<arr[lb]<<"\t";	
	}
	lb=0;
	cout<<endl;
	cout<<"Enter element you wanna search"<<endl;
	cin>>element;
	int returnValue=BinarySearch(arr,element,lb,ub);
	if(returnValue>=0)
	{
		cout<<"Element found at index "<<returnValue<<endl;
	}
	else
	{
		cout<<"Element not found"<<endl;
	}
 return 0;
}

