#include<iostream>
using namespace std;
int main()
{
	const int max=50;
	int choice=0;
	int firstoccurance=-1;
	int arr[max]={3,6,3,6,9};
	int lb,ub=4;
	cout<<"Current Array is"<<endl;
	for(lb=0;lb<=ub;lb++)
	{
		cout<<arr[lb]<<"\t";	
	}
	cout<<endl;
	cout<<"Enter element you wanna search"<<endl;
	cin>>choice;	
	for(lb=0;lb<=ub;lb++)
	{
		if(arr[lb]==choice)
		{
			firstoccurance=lb;
			break;	
		}
	}
	if(firstoccurance==-1)
	{
		cout<<"Element not found"<<endl;
	}
	else
	{
	cout<<"\nFirst occurance of element is at "<<firstoccurance<<" index"<<endl;
	}
//	for(lb=firstoccurance;lb<=ub;lb++)
//	{
//		arr[lb]=arr[lb+1];
//	}
//	arr[ub]=0;
//	ub--;
//	firstoccurance=-1;
//	}
 return 0;
}

