//#include<iostream>
//#define thre 6
//using namespace std;
//
//void ext(int arr[], int a) {
//	int digit = 0;
//	while (a != 0) {
//		a /= 10;
//		digit++;
//	}
//
//	for (int i = digit - 1; i >= 0; i--) {
//		arr[i] = a % 10;
//		a /= 10;
//	}
//}
//
//int arr[6] = { 0 };
//int seq[2] = { 0 }, N;
//bool ch[thre] = { 0 };
//
//void swap(int *a, int *b) {
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void comb(int cnt, int idx) {
//	if (cnt == 2) {
//		if (arr[seq[0]] < arr[seq[1]])
//			swap(arr[seq[0]], arr[seq[1]]);
//	}
//	for (int i = idx; i < N; i++)
//	{
//		if (!ch[i]) {
//			seq[cnt] = i;
//			ch[cnt] = true;
//			comb(cnt + 1, i + 1);
//			ch[cnt] = false;
//		}
//	}
//}
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T, mov;
//	cin >> T;
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		
//		cin >> N >> mov;
//		ext(arr, N);
//
//		comb(0, 0);
//
//		cout << '#' << test_case << ' ' << 0 << '\n';
//	}
//	return 0;
//}