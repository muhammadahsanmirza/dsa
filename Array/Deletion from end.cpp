#include<iostream>
using namespace std;
int main()
{
	const int max=6;
	int arr[max]={9,4,8,3,6};
	char choice=' ';
	int lb=0,ub=4;
	while(true)
	{
	cout<<"\nCurrent array is:"<<endl;
	for(lb=0;lb<=ub;lb++)
	{
		cout<<arr[lb]<<"\t";
	}
	cout<<"\nPress y to delete an element from end"<<endl;
	cin>>choice;
	if(choice=='y'|| choice=='Y')
	{
	if(ub<0)
	{
		cout<<"Sorry,the array is empty"<<endl;
		return 0;
	}
	else
	{
		arr[ub]='\0';
		--ub;
			system("cls");	
	}
	}
	else
	{
		cout<<"Wrong Choice"<<endl;
	}
	}
 return 0;
}

