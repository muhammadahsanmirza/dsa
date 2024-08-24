#include<iostream>
using namespace std;
int main()
{
	const int max=50;
	int arr[max]={6,4,8,3,6};
	int element=0;
	int lb=0,ub=4;
	while(true)
	{
	cout<<"\nCurrent array is:"<<endl;
	for(lb=0;lb<=ub;lb++)
	{
		cout<<arr[lb]<<"\t";
	}
	cout<<"\nEnter element you want to enter"<<endl;
	cin>>element;
	if(ub==max-1)
	{
		cout<<"Sorry,the array is full"<<endl;
		return 0;
	}
	else
	{
		++ub;
		arr[ub]=element;
	
	}
	}
 return 0;
}

