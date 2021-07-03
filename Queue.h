#ifndef _QUEUES_H
#define _QUEUES_H
#include<iostream>
using namespace std;

class NODE
{
private:
	int data;
	NODE *next;
public:
	void setdata(int val)
	{
		data=val;
	}
	int getdata()const
	{
		return data;
	}
	void setnext(NODE *ptr)
	{
		next=ptr;
	}
	NODE* getnext()
	{
		return next;
	}
};

class QUEUE
{
private:
	
	NODE* front;
	NODE* rear;
public:
	QUEUE();
	void enqueue(int);
	int deQueue();
	int isEmpty();
};
#endif