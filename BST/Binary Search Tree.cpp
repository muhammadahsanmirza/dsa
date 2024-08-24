#include<iostream>
using namespace std;
//#define BlankSpaces 10;
const int BlankSpaces=10;
class node
{
	public:
		node *leftChild;
		int data;
		node *rightChild;
	node()
	{
		this->leftChild=NULL;
		this->data=0;
		this->rightChild=NULL;
	}
	node(int data)
	{
		this->leftChild=NULL;
		this->data=data;
		this->rightChild=NULL;
	}
};

class binarySearchTree
{
	public:
		node *root;
	binarySearchTree()
	{
		root=NULL;
	}		
	bool isEmpty()
	{
		if(root==NULL)
		{
			return true;
		}
		return false;
	}
	
	/*	Inserting a value in Binary search tree	*/
	
	void insertNode(node *newChild)
	{
		if(root==NULL)
		{
			root=newChild;
			cout<<"Value inserted as root Node"<<endl;	
		}
		else
		{
			node *temp=root;
			while(temp!=NULL)
			{
				if(newChild->data == temp->data)
				{
					cout<<"\n\nSorry, Duplicate value not allowed\n"<<endl;
					return;
				}
				else if(newChild->data < temp->data && temp->leftChild==NULL)
				{
				 	temp->leftChild=newChild;
				 	cout<<"New Child Inserted"<<endl;
				 	break;
				}
				else if(newChild->data < temp->data)
				{
					temp->leftChild=newChild;
				}
				else if(newChild->data > temp->data && temp->rightChild==NULL)
				{
					temp->rightChild=newChild;
					cout<<"New Child Inserted"<<endl;
				 	break;
				}
				else 
				{
					temp->rightChild=newChild;
				}
			}
		}
	}
	
	/*	Searching a value from Binary search tree	*/
	
	node *search(int value)
	{
		node *temp=root; 
		while(temp!= NULL)
		{
			if(root==NULL)
			{
				return root;
			}
			else
			{
				if(value == temp->data)
				{
					return temp;
				}
				else if(value < temp->data)
				{
					temp=temp->leftChild;
				}
				else    
				{
					temp=temp->rightChild;
				}
			}
		}
		return NULL;
	}
	
	/*	Printing a Binary Search Tree	*/
	
	void printBST(node *print, int spaces)
	{
		if(print==NULL)
		{
			return;
		}
		else
		{
			spaces += BlankSpaces;
			printBST(print->rightChild,spaces);
			cout<<endl;
			
			for(int i=BlankSpaces;i<spaces;i++)
			{
				cout<<" ";
			}
			cout<<print->data<<endl;
			
			printBST(print->leftChild,spaces);
		}
	}
};

int main()
{
	int option, nodeValue;
	binarySearchTree BST;
	do
	{
		cout<<"Select an option to perform operation\n"
			  "1: Add a new Node to BST\n"
			  "2: Search in BST\n"
			  "3: Print BST\n"
			  "4: Clear Screen\n"
			  "5: Exit"<<endl;
		cin>>option;
		node *newInsertingNode= new node();
		switch(option)
		{
			case 1:
				cout<<"\n\tINSERTION"<<endl;
				/*	Creating object of node class dynamically	*/
				cout<<"Enter value of the node"<<endl;
				cin>>nodeValue;
				newInsertingNode->data=nodeValue;
				BST.insertNode(newInsertingNode);
				cout<<endl;
				break;
			case 2:
				cout<<"\n\tSearching"<<endl;
				cout<<"Enter the value you wanna search"<<endl;
				cin>>nodeValue;
				newInsertingNode=BST.search(nodeValue);
				if(newInsertingNode!= NULL)
				{
					cout<<"Element Found"<<endl;
				}
				else
				{
					cout<<"Element not Found"<<endl;					
				}
				break;
			case 3:
				cout<<"\n\tPrinting"<<endl;
				BST.printBST(BST.root,BlankSpaces);
				break;
			case 4:
					system("cls");
				break;
			case 5:
					exit(0);
				break;
			default:
				cout<<"Wrong choice"<<endl;
		}
	}
	while(option!=0);
 return 0;
}

