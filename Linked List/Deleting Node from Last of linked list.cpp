#include <iostream>
#include <cstdlib> 	// header file for malloc() function 
using namespace std;
struct node{
    int value;
    node *address;
} *first,*ptr, *cptr;
void createNode()
{

    char choice;
    int counter=0;
    do
    {
        if (counter==0)
        {
        	// malloc() allocates a block of uninitialized memory to pointer
            ptr=  (node*) malloc(sizeof (node));
            cout<<"Enter value of first node"<<endl;
            cin>>ptr->value;
            first=ptr;
            ++counter;
            cout<<"Press y to create another node, or any key to exit"<<endl;
            cin>>choice;
        }
        else
        {
            cptr=(node*) malloc(sizeof (node));
            cout<<"Enter new value"<<endl;
            cin>>cptr->value;
            ptr->address=cptr;
            ptr=cptr;
            cout<<"Press y to create another node, or any key to exit"<<endl;
            cin>>choice;

        }

    }
    while(choice=='Y' || choice=='y');
    ptr->address= NULL;
}

void deleteNodeFromStart()
{
	if(first->address!= NULL)
	{
		node* temp=first;
		first=first->address;	
		free(temp);
	}
	else
	{
		node* temp=first;
		free(temp);	
	}
	
}

void deleteNodeFromEnd()
{
//	ptr=first;
//	while(ptr!= NULL)
//	{
//		cptr=ptr->address;
//		ptr=cptr;	
//		if(ptr->address== NULL)
//		{
//			ptr=NULL;
//		}	
//	}

	if(first != NULL) {
    
    /*1. if head in not null and next of head
      is null, release the head*/
    if(first->address == NULL) {
      first = NULL;
    } 
	else {      
      /*2. Else, traverse to the second last 
        element of the list*/
      node* temp = first;
      while(temp->address->address != NULL)
      {
        temp = temp->address;
	  }
      
      /*3. Change the next of the second 
           last node to null and delete the
           last node*/
      node* lastNode = temp->address;
      temp->address = NULL;
      free(lastNode); 
    }
  }
}
void displayNode()
{
//		system("cls");
	if(first!= NULL)
	{
	cout<<"Node values are:"<<endl;
    ptr=first;
    while(ptr!= NULL)
    {
        cout<<ptr->value<<"\t";
        ptr=ptr->address;
    }
    cout<<endl;	
	}
	else
	{
		cout<<"Linked List does not exist"<<endl;
	}
    
}
int main()
{
	int choice;
	menue:	
	cout<<"\nWhich operation you wanna perform???\n"
		  "1: Create Node\n"
		  "2: Delete Node from start\n"
		  "3: Delete Node from end\n"
		  "4: Delete Node from certain Position\n"
		  "5: Exit"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			createNode();
			displayNode();
			goto menue;
			break;
		case 2:
				system("cls");
			displayNode();
			deleteNodeFromStart();
			displayNode();
			goto menue;
			break;
		case 3:
				system("cls");
			cout<<"Current Node"<<endl;
			displayNode();
			deleteNodeFromEnd();
			cout<<"Node after deletion"<<endl;
			displayNode();
			goto menue;
			break;
		default:
			cout<<"Wrong Choice"<<endl;
	}
    return 0;
}
