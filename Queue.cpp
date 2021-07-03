#include"Queue.h"

QUEUE::QUEUE()
{
	front=rear=NULL;
}
void QUEUE::enqueue(int val)
{
	NODE* newnode=new NODE();
	newnode->setdata(val);
	if(front==NULL)
	{
		newnode->setnext(NULL);
		front=newnode;
		rear=newnode;
	}
	else
	{
		newnode->setnext(rear->getnext());
		rear->setnext(newnode);
		rear=newnode;
	}
}
int QUEUE::deQueue()
{
	if(isEmpty())
	{
		cout<<"Queue is Empty."<<endl;
	}
	else
	{
		NODE* temp=front;
		int val=front->getdata();
		front=front->getnext();
		delete temp;
		return val;
	}
}
int QUEUE::isEmpty()
{
	return front==NULL;
}