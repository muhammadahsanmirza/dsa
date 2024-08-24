#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
	node *prev;
	int data;
	node *next;
} *top=NULL,*topminusone=NULL, *first=NULL, *poppednode=NULL;

void push(int element)
{
	int counter=0;
	if(counter=0)
	{
		counter++;
		top=(node*)malloc(sizeof(node));
		first=top;
		topminusone=top;
		top->prev=NULL;
		top->data=element;
	}
	else
	{
		counter++;
		top=(node*)malloc(sizeof(node));
		top->prev=topminusone;
		topminusone=top;
		top->data=element;
	}
	top->next=NULL;
}
int pop()
{
	if(top==NULL)
	{
		cout<<"Stack is Empty"<<endl;
	}
	else if
	poppednode=top;
	top
}
void display()
{
	first=top;
	while(first->prev!=NULL)
	{
		cout<<first->data<<endl;
		first=first->prev;
	}
		cout<<first->data<<endl;
}
int main()
{
	push(11);
	push(22);
	push(33);
	push(44);
	display();

 return 0;
}

