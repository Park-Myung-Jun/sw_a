//#include <stdio.h>
//#pragma warning(disable:4996)
//
//int len(char a[]) {
//	int i = 0;
//	while (a[i++]);
//	return i;
//}
//
//void main()
//{
//	char buf[100] = { 0 }, *ch[20] = { 0 };
//	int N, nums = 0, i, j, arr[20] = { 0 };
//	scanf("%d ", &N);
//	scanf("%[^\n]\n", buf);
//	int size = len(buf);
//	ch[0] = buf;
//	j = 1;
//	for (i = 0; i < size; i++)
//		if (buf[i] == ' ')
//		{
//			ch[j] = buf + i + 1;
//			buf[i] = '\0';
//			nums++;
//		}
//
//	printf("%d\n", nums + 1);
//
//	for (i = 0; i < nums + 1; i++) {
//		sscanf(ch[i], "%s", &arr[i]);
//	}
//
//	for (i = 0; i < nums + 1; i++)
//		printf("%d ", arr[i]);
//}