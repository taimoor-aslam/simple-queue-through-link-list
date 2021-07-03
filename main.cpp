#include"Queue.h"

int main()
{
	QUEUE q1;
	q1.enqueue(5);
	q1.enqueue(10);
	q1.enqueue(15);
	cout<<q1.deQueue()<<endl;
	cout<<q1.deQueue()<<endl;
	cout<<q1.deQueue()<<endl;
	cout<<q1.deQueue()<<endl;
	system("pause");
	return 0;
}