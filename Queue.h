#pragma once
#include <iostream>

using namespace std;

class Queue
{
private:
	  string queue;
public:
	Queue(string queue);
	void IsEmpty();
	void IsFull();
	void Enqueue(int,int);
	void Dequeue(int);
	void Show();
};

