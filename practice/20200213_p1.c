//#include <stdio.h>
//#define thre 10
//#define q_size 100
//#pragma warning(disable:4996)
//int graph[thre][thre] = { 0 }, ch[thre] = { 0 };
//int queue[100] = { 0 }, r = 0, f = 0;
//int  N, M;
//
//void push(int q[], int v) {
//	q[r++] = v;
//}
//
//void pop(int q[]) {
//	if (f == r)
//		return;
//	f++;
//}
//
//int peek(int q[]) {
//	return q[f];
//}
//
//int isEmpty(int q[]) {
//	if (f == r)
//		return 1;
//}
//
//void bfs(int first) {
//	int i;
//	push(queue, first - 1);
//	ch[first - 1] = 1;
//	while (!isEmpty(queue)) {
//		int tmp = peek(queue);
//		pop(queue);
//		printf("%d ", tmp+1);
//		for (i = 0; i < N; i++)
//			if (graph[tmp][i] == 1 && !ch[tmp])
//			{
//				push(queue, graph[tmp][i]);
//				ch[graph[tmp][i]] = 1;
//			}
//	}
//}
//
//void main()
//{
//	int end, st, i, j;
//	scanf("%d %d\n", &N, &M);
//	for (int i = 0; i < M; i++)
//	{
//		scanf("%d %d\n", &st, &end);
//		graph[st - 1][end - 1] = 1;
//		graph[end - 1][st - 1] = 1;
//	}
//
//	for (i = 0; i < N; i++) {
//		for (j = 0; j < N; j++)
//			printf("%d ", graph[i][j]);
//		puts("");
//	}
//
//	bfs(1);
//}