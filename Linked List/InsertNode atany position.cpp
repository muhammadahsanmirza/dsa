#include<iostream>
#include <cstdlib> 	// header file for malloc() function 

		/*
			Muhammad Ahsan
			21-Arid-737
		*/
using namespace std;
struct node{
    int data;
    node *link;
} *head=NULL, *ptr=NULL, *cptr=NULL, *newNode=NULL, *temp1=NULL, *temp2=NULL;
int numberOfNodes=0;
void create()
{

    char choice;
    int counter=0;
    do
    {
        if (counter==0)
        {
        	// malloc() allocates a block of uninitialized memory to pointer
            ptr=  (node*) malloc(sizeof (node));
            numberOfNodes++;
            cout<<"Enter value of first node"<<endl;
            cin>>ptr->data;
            head=ptr;
            ++counter;
            cout<<"Press y to create another node, or any key to exit"<<endl;
            cin>>choice;
        }
        else
        {
            cptr=(node*) malloc(sizeof (node));
            numberOfNodes++;
            cout<<"Enter new value"<<endl;
            cin>>cptr->data;
            ptr->link=cptr;
            ptr=cptr;
            cout<<"Press y to create another node, or any key to exit"<<endl;
            cin>>choice;

        }

    }
    while(choice=='Y' || choice=='y');
    ptr->link= NULL;
}
void createNodeAtCertainPosition(int position)
{
	if(position>numberOfNodes)
	{
		cout<<"Sorry, Position doesn't exist"<<endl;
		return;
	}
	else
	{
		numberOfNodes++;
		temp1=head;
		temp2=head;
		int traverseToPosition=1;
		while(traverseToPosition !=position &&  temp1->link!=NULL)
		{
			temp2=temp1;
			temp1=temp1->link;
			traverseToPosition++;
		}
			newNode=(node*) malloc(sizeof (node));
		if(temp2==head)
		{
			cout<<"Enter Data of new Node"<<endl;
			cin>>newNode->data;
			newNode->link=head;
			head=newNode;
		}
		else if(temp2->link==NULL)
		{
			cout<<"Enter Data of new Node"<<endl;
			cin>>newNode->data;
			temp2->link=newNode;
			newNode->link=NULL;			
		}
		else
		{			
			cout<<"Enter Data of new Node"<<endl;
			cin>>newNode->data;
			temp2->link=newNode;
			newNode->link=temp1;
		}
	}
	
		
}
void display()
{
//		system("cls");
    cout<<"\nNode values are:"<<endl;
    ptr=head;
    while(ptr!= NULL)
    {
        cout<<ptr->data<<"\t->\t";
        ptr=ptr->link;
    }
    cout<<"NULL"<<endl;
}
int main()
{
	int position;
	int choice=0;
	menu:		
	cout<<"\nYou Want to Perform\n"
		  "1:Create Node at end\n"
		  "2:Create Node at certain position\n"
		  "3:Display Linked List\n"
		  "4:Exit"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			create();
				system("cls");
			display();
			goto menu;
			break;
		case 2:
				system("cls");
			cout<<"Enter position at which you want to add Node"<<endl;
			cin>>position;
			createNodeAtCertainPosition(position);
//				system("cls");
			display();
			goto menu;
			break;
		case 3:
				system("cls");
			display();
			break;
		default:
			cout<<"Wrong Choice"<<endl;
			exit(0);
	}
 return 0;
}

