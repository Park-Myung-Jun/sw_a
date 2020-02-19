//#include <stdio.h>
//#define size 100
//
//typedef enum {
//	F, T
//} BOOL;
//
//int q[size] = { 0 }, r = 0, f = 0;
//
//BOOL isEmpty() {
//	if (f == r)
//		return T;
//	else
//		return F;
//}
//
//void enqueue(int v) {
//	if ((r+1)%size == f)
//		return;
//	q[(r++)%size] = v;
//}
//
//int front() {
//	if (isEmpty())
//		return -1;
//	return q[f];
//}
//
//void dequeue() {
//	if (isEmpty())
//		return;
//	f = (f + 1) % size;
//}
//
//
//
//void main()
//{
//	int my = 0, people = 1;
//	while (true) {
//		enqueue(people);
//		my++;
//		if (my == 18)
//			break;
//		enqueue(front());
//		dequeue();
//		people++;
//	}
//
//	printf("%d\n", front());
//}