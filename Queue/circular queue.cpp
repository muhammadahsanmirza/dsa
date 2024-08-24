#include<iostream>
using namespace std;
class circularQueue
{
	private:
		int *queue;
		int size;
		int front;
		int rear;
	
	public:
		circularQueue()
		{
			size=0;
			queue=0;
			front=-1;
			rear=-1;
		}
		circularQueue(int size)
		{
			this->size=size;
			this->queue= new int [size];
			front=-1;
			rear=-1;
		}
		
		bool isEmpty()
		{
			if(rear== -1 && front== -1)
			{
				return true;
			}
			return false;
		}
		bool isFull()
		{
			if(front == 0 && rear==size-1)
			{
				return true;
			} 
			else if(front == rear+1)
			{
				return true;				
			}
			return false;
		}
		void enqueue(int element)
		{
			if(isFull()== true)
			{
				cout<<"Queue is full"<<endl;
				return;
			}
			else if(isEmpty())
			{
				rear=0;
				front=0;
			}
			else if(front !=0 && rear==size-1)
			{
				rear=0;
			}
			else
			{
				rear++;
			}
			cout<<"element inserted at \""<<rear<<"\" index"<<endl;
			queue[rear]=element;
		}
		int dequeue()
		{
			int element;
			if(isEmpty())
			{
				cout<<"Queue is Empty"<<endl;
				return -1;
			}
			else if(front==rear)
			{
				element=queue[front];
				queue[front]='\0';
				rear=-1;
				front=-1;
			}
			else if(front==size-1)
			{
				element=queue[front];
				queue[front]='\0';
				front=0;
			}
			else
			{
				element=queue[front];
				queue[front]='\0';
				front++;
			}
			return element;
		}
		int fornt()
		{
			if(isEmpty())
			{
				return -1;
			}
			else
			{
				return queue[front];
			}
		}
		void display() 
		{
	    // Function to display status of Circular Queue
	    int i;
	    if (isEmpty()) 
		{
	      cout << endl
	         << "Empty Queue" << endl;
	    } 
		else 
		{
	      for (i = front; i != rear; i = ((i + 1) % size))
        {
       		cout << queue[i]<<"\t";
		}
	     	cout << queue[i]<<"\t"<<endl; 
	    }
		}
};
int main()
{
	circularQueue q1(3);
	q1.enqueue(11);
	q1.enqueue(12);
	q1.enqueue(15);
	q1.display();
	q1.dequeue();
	q1.display();
	q1.enqueue(34);
	q1.display();
	q1.dequeue();
	q1.display();
	q1.enqueue(56);
	q1.display();
 	return 0;
}

