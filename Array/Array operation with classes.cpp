#include<iostream>
using namespace std;
struct Array_elements{
	int max;
	int arr[];
	int element;
	int lb;
	int ub;
};
class arrray_operations{
	public:
//	void current_array(int Arr[],int lb,int ub)
	void current_array(Array_elements A)
	{
		cout<<"\nCurrent array is:"<<endl;
		for(A.lb=0;A.lb<=A.ub;A.lb++)
		{
			cout<<A.arr[A.lb]<<"\t";
		}
	}
//	Array_elements insertion_at_end(int Arr[],int lb,int ub,int max,int element)
	Array_elements insertion_at_end(Array_elements A)	
	{
		if(A.ub==A.max)
	{
		cout<<"Sorry,the array is full"<<endl;
	}
	else
	{
		++A.ub;
		A.arr[A.ub]=A.element;
	
	}
		return A;
	}
};
int main()
{
	arrray_operations array;
	Array_elements A;

	A.max=50;
	A.arr[]={6,4,8,3,6};
	A.element=0;
	A.lb=0;
	A.ub=4;
	int choice=0;
	mainMenu:
	cout<<"You wanna do:\n"
		  "1: Insertion\n"
		  "2: Deletion\n"
		  "3: Searching\n"
		  "4: Exit"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
				system("cls");
			array.current_array(A);
			cout<<"\nYou wanna insert element at\n"
				  "1: End\n"
				  "2: Start\n"
				  "3: At certain position\n"
				  "4: Menu"<<endl;
				  cin>>choice;
				  switch(choice)
				  {
				  	case 1:
				  		cout<<"\nEnter element you want to enter"<<endl;
						cin>>A.element;
						Array_elements B;
						B=array.insertion_at_end(A);
						array.current_array(B);
						cout<<endl;
							system("pause");
							system("cls");
						goto mainMenu;
						break;
					case 2:
						break;
					case 3:
						break;
					case 4:
						break;
				  }
			break;
		case 2:
			break;
		case 3:
			break;
	}

 return 0;
}

