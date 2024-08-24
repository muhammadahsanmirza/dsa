#include<iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
	int pivot=arr[e];
	int index=s;
	for(int i=s;i<e;i++)
	{
		if(arr[i]<=pivot)
		{
			swap(arr[i],arr[index]);
			index++;
		}
	}
	swap(arr[e],arr[index]);
	return index;	
}

void quickSort(int arr[], int s, int e)
{
	if(s<e)
	{
		int p=partition(arr,s,e);
		quickSort(arr,s,p-1);
		quickSort(arr,p+1,e);
	}
}
int main()
{
	const int size=9;
	int arr[size]={6,7,9,8,3,5,2,1,4};
	int s=0, e=size-1;
	cout<<"Current Array is"<<endl;
	for (int i = 0; i < size; i++)
	{
        cout << arr[i] << " ";
	}
	quickSort(arr,s,e);
	cout<<"\nArray after merge sort is"<<endl;
	for (int i = 0; i <size; i++)
        cout << arr[i] << " ";
 return 0;
 return 0;
}

