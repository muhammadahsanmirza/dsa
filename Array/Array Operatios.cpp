#include<iostream>
using namespace std;
//void traversal(int *arr)
//{
//	
//	cout<<"Array elements are :"<<endl;
//	for(int lb=0;lb<array_elements;lb++)
//	{
//		cout<<arr[lb]<<"\t";
//	}
//}

void insertion_at_a_point(int *arr)
{
	
}
int main()
{
	const int size=50;
	int position=0;
	int element=0;
	int arr[size];
	int lb=0,ub=0;
	int array_elements=0;
	cout<<"How many elements you want to enter"<<endl;
	cin>>array_elements;
	cout<<"Enter array elements"<<endl;
	for( ;lb<array_elements;lb++)
	{
		++ub;
		cin>>arr[lb];
	}
//	traversal(arr);
	cout<<"Enter the position at which you want to enter element"<<endl;
	cin>>position;
	cout<<"Enter element"<<endl;
	cin>>element;
	array_elements++;
	for(int i=array_elements-1;i>position-1;--i)
	{
		arr[i+1]=arr[i];
	}
	arr[position]=element;
	for(int i=0;i<array_elements;i++)
	{
		cout<<arr[i]<<"\t";
	}
	
 return 0;
}

