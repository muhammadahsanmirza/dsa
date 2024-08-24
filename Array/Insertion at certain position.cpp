#include<iostream>
using namespace std;
int main()
{
	//Insertion at certain position
	const int max=50;
	int element_position=0;
	int element=0;
	int arr[max]={6,4,8,3,6};
	int lb,ub=4;
	while(true)
	{
	cout<<"\nCurrent array is:"<<endl;
	for(lb=0;lb<=ub;lb++)
	{
		cout<<arr[lb]<<"\t";
	}
	cout<<"\nAt which position you want to enter your element?"<<endl;
	cin>>element_position;
	if(ub==max-1 ||element_position>ub)
	{
		cout<<"Sorry,the operation is unsuccessful"<<endl;
		return 0;
	}
	else
	{
		++ub;
	cout<<"Enter Element"<<endl;
	cin>>element;
	for(lb=ub;lb>element_position;--lb)
	{
		arr[lb]=arr[lb-1];
	}
	arr[element_position]=element;
	
	}
	}
 return 0;
}

