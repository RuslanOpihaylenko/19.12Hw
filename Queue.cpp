#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue(string queue)
{
	if (queue.size() != 0)
	{
		for (int i = 0;i < queue.size();i++)
		{
			queue[i] = queue[i];
		}
	}
}

void Queue::IsEmpty()
{
	if (queue.size() == 0)
	{
		cout << "It's empty!" << endl;
	}
}

void Queue::IsFull()
{
	if (queue.size() != 0)
	{
		cout << "It's full!" << endl;
	}
}

void Queue::Enqueue(int n, int value)
{
	for (int i = 0;i < queue.size();i++)
	{
		if (queue[i] == queue[n])
		{
			queue[i] = value;
			cout << queue[i];
		}
	}
}

void Queue::Dequeue(int n)
{
	for (int i = 0;i < queue.size();i++)
	{
		if (queue[i] != queue[n])
		{
			cout << queue[i];
		}
	}
}

void Queue::Show()
{
	for (int i = 0;i < queue.size();i++)
	{
			cout << queue[i];
	}
}
