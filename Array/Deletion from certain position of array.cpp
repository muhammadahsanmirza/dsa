#include<iostream>
using namespace std;
int main()
{
	const int max=6;
	int arr[max]={9,4,8,3,6};
	int position=0;
	int lb=0,ub=4;
	while(true)
	{
	cout<<"\nCurrent array is:"<<endl;
	for(lb=0;lb<=ub;lb++)
	{
		cout<<arr[lb]<<"\t";
	}
	cout<<"\nEnter the position from where you want too delete the element"<<endl;
	cin>>position;
	if(ub<0 || position>ub)
	{
		cout<<"Sorry,the position does not exist"<<endl;
		return 0;
	}
	else
	{
		for(lb=position-1;lb<=ub;lb++)
		{
			arr[lb]=arr[lb+1];
		}
		arr[ub]='\0';
		--ub;	
	}
	}
 return 0;
}

