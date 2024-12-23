#include "Queue.h"
#include <iostream>

using namespace std;

int main()
{
	Queue q = "Hellow";
	q.IsEmpty();
	q.IsFull();
	q.Enqueue(3, "d");
	q.Dequeue(3);
	q.Show();
}