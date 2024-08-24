#include<iostream>
using namespace std;
int main()
{
	const int max=50;
	int choice=0;
	int arr[max]={3,3,6,3,3,3,3,7,3,5,6,8,8,4,4,3,3,3,3,3,3,3,9};
	int lb,ub=22;
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
		for(int i=lb;i<=ub;i++)
		{
			arr[i]=arr[i+1];
			
		}
		lb=-1;
		arr[ub]='0';
		--ub;	
		}	
	}
	cout<<"Current Array is"<<endl;
	for(lb=0;lb<=ub;lb++)
	{
		cout<<arr[lb]<<"\t";	
	}
	cout<<endl;
 return 0;
}

