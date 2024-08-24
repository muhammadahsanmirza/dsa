#include<iostream>
using namespace std;
class Queue
{
	private:
		int *queue;
		int size;
		int front;
		int rear;
	
	public:
		Queue()
		{
			size=0;
			queue=0;
			front=-1;
			rear=-1;
		}
		Queue(int size)
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
			if(rear==size-1)
			{
				return true;
			}
			return false;
		}
		void enqueue(int element)
		{
			if(isFull())
			{
				cout<<"Queue is full"<<endl;
				return;
			}
			else if(isEmpty())
			{
				rear=0;
				front=0;
			}
			else
			{
				rear++;
			}
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
			if(isEmpty())
			{
				cout<<"Queue is Empty"<<endl;
			}
			else
			{
			cout<<"\nCurrent QUEUE is:"<<endl;
			cout<<endl;
			for(int i=front;i<=rear;i++)
			{
				cout<<queue[i]<<"\t";
			}
				cout<<endl;
			}
			
		}
		int count()
		{
			return (rear-front)+1;
		}
};
int main()
{
	Queue q1(3);
	q1.enqueue(7);
	cout<<q1.count()<<endl;
	q1.enqueue(6);
	cout<<q1.count()<<endl;
	q1.enqueue(3);
	cout<<q1.count()<<endl;
	q1.dequeue();
	q1.dequeue();
	q1.dequeue();
	q1.display();
 return 0;
}

