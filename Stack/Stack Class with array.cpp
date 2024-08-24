#include<iostream>
using namespace std;
class stack{
	private:
		// dynamic array for stack
		int *st;
		// size of stack
		int size;
		// index for stack
		int top;
	public:
			// Default constructor
		stack()
		{
			st=0;
			size=0;
			top=-1;
		}
			// Parametrized constructor
		stack(int size)
		{
//			initializing variables
			
			this->size=size;
			// stack is allocated size dynamically
			this->st=new int[size];
			this->top=-1;
		}
		// diplay function of stack
		void display_stack()
		{
			cout<<endl;
			cout<<"Stack is "<<endl;
			for(int i=top; i>=0;--i)
			{
				cout<<st[i]<<endl;
			}
			
		}
			// push function of stack
		void push(int pushed_element)
		{
			if(top==size-1)
			{
				cout<<"Stack overflow"<<endl;
				return;
			}
			else
			{
				++top;
				st[top]=pushed_element;	
			}
		}
		int pop()
		{
			if(top<0)
			{
				cout<<"Stack underflow"<<endl;
				return 0;				
			}
			else
			{
				int popped_element=st[top];
				--top;
				return popped_element;
			}
		}
		// to check peek element(element present at top of stack)
		int peek()
		{
			if(top>=0)
			{
				return st[top];
			}
			else
			{
				cout<<"Stack is empty"<<endl;
				return -1;
			}
		}
		// to check stack is empty or not
		bool isEmpty()
		{
			if(top<0)
			{
				// returns true if stack is empty
				return true;		
			}	
			else
			{
				return false;
			}
		} 
};
int main()
{
		//	creating stack of size 5
	stack s(5);
		// push elements in stack
	s.push(12);
	s.push(23);
	s.push(45);
		// Displaying stack
	s.display_stack();
		//Pop element in stack
	s.pop();
	s.pop();
		// check peak element of stack
	cout<<"Peek element is :"<<s.peek()<<endl;
		// to check stack is empty or not
	if(s.isEmpty())
	{
		cout<<"Stack is empty"<<endl;
	}
	else
	{
		cout<<"Stack is not empty"<<endl;
		
	}
 	return 0;
}

