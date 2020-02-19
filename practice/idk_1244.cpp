//#include<iostream>
//#include <stack>
//
//using namespace std;
//
//void swap(int *a, int *b) {
//
//}
//
//int main(int argc, char** argv)
//{
//	int test_case, arr[6] = { 0 }, num, ch, max, idx=0;
//	int T;
//	cin >> T;
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		int digit = 0;
//		cin >> num >> ch;
//		stack<int> s;
//		while (num != 0) {
//			s.push(num % 10);
//			num /= 10;
//			digit++;
//		}
//
//		int i = 0;
//		while (!s.empty()) {
//			arr[i++] = s.top();
//			s.pop();
//		}
//
//		/*for (int i = 0; i < digit; i++)
//			cout << arr[i] << ' ';
//		cout << '\n';*/
//
//		for (int i = 0; i < digit; i++) {
//			bool isCh = false;
//			max = arr[i];
//			for (int j = digit-1; j >= i+1; j--)
//				if (arr[j] > max)
//				{
//					isCh = true;
//					max = arr[j];
//					idx = j;
//				}
//			if (isCh) {
//				swap(&arr[i], &arr[idx]);
//				ch--;
//			}
//			if (ch == 0)
//				break;
//		}
//
//
//	}
//
//	return 0;
//}