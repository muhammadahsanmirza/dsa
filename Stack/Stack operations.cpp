#include<iostream>
using namespace std;
void display_stack(int stack[], int top)
{
	cout<<"Stack is "<<endl;
	for(int i=0; i<=top;i++)
	{
		cout<<stack[i]<<endl;
	}
	cout<<endl;
}
int main()
{
	const int size= 3;
	int stack[size];
	int top=-1;
	int pushed_element=0;
	int choice;
	menu:
	cout<<"\n You wanna \n"
		  "1:Push\n"
		  "2:Pop\n"
		  "3:exit"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Enter element you wanna push"<<endl;
			cin>>pushed_element;
			if(top== size-1)
			{
				cout<<"\n\nSorry,Stack is full"<<endl;
				display_stack(stack,top);
				return 0;
				
			}
			else
			{
				++top;
				stack[top]=pushed_element;
				cout<<endl;
				display_stack(stack,top);
				goto menu;
			}	
				push(stack,size,top);
				goto menu;
			break;
		case 2:
			if(top<0)
			{
				cout<<"\n\nSorry,Stack is Empty"<<endl;
				return 0;				
			}
			else
			{
				stack[top]='0';
				--top;
				cout<<endl;
				display_stack(stack,top);
				goto menu;
			}
			break;
		case 3:
			cout<<"Wrong choice"<<endl;
			return 0;
			break;
	}

 return 0;
}

