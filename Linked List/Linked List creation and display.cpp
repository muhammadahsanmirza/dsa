#include <iostream>
#include <cstdlib> 	// header file for malloc() function 
using namespace std;
struct node{
    int value;
    node *address;
} *first;
node *ptr, *cptr;
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
void display()
{
		system("cls");
    cout<<"\nNode values are:"<<endl;
    ptr=first;
    while(ptr!= NULL)
    {
        cout<<ptr->value<<"\t";
        ptr=ptr->address;
    }
    cout<<endl;
}
int main()
{
    create();
    display();
    return 0;
}
