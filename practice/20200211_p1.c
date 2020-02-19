//#include <stdio.h>
//#define size 10
//
//int q[size] = { 0 }, r = 0, f = 0;
//
//void push(int v) {
//	if (r == size - 1)
//		return;
//	q[r++] = v;
//}
//
//int front() {
//	if (f == r)
//		return;
//	return q[f];
//}
//
//void pop() {
//	f++;
//}
//
//void main()
//{
//	
//	for (int i = 0; i < 3; i++)
//	{
//		push(i + 1);
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", front());
//		pop();
//	}
//
//}