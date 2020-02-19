//#include <stdio.h>
//#define size 10
//
//typedef enum {
//	F, T
//} BOOL;
//
//int q[size] = { 0 }, r = 0, f = 0;
//
//void enqueue(int v) {
//	if ((r+1)%size == f)
//		return;
//	q[(r++)%size] = v;
//}
//
//int front() {
//	if (isEmpty())
//		return;
//	return q[f];
//}
//
//void dequeue() {
//	if (isEmpty())
//		return;
//	f = (f + 1) % size;
//}
//
//BOOL isEmpty() {
//	if (f == r)
//		return T;
//	else
//		return F;
//}
//
//void main()
//{
//	for (int i = 0; i < 15; i++)
//		enqueue(i + 1);
//
//	for (int i = 0; i < 15; i++)
//	{
//		printf("%d ", front());
//		dequeue();
//	}
//
//	for (int i = 0; i < 30; i++)
//	{
//		enqueue(i + 1);
//		printf("%d ", front());
//		dequeue();
//		printf("%d\n", f);
//	}
//
//}