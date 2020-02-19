//#include<iostream>
//#define thre 10
//using namespace std;
//
//int N, arr[thre] = { 0 }, ans, seq[thre] = { 0 };
//bool ch[thre] = { 0 };
//
//int abs(int a, int b) {
//	return a > b ? a - b : b - a;
//}
//
//bool isDia(int cnt) {
//	for (int i = 0; i < cnt; i++)
//		if (abs(arr[i], arr[cnt]) == abs(i, cnt))
//			return true;
//
//	return false;
//}
//
//void dfs(int cnt) {
//	if (cnt == N)
//	{
//		ans++;
//		return;
//	}
//	for (int i = 0; i < N; i++)
//	{
//		if (!ch[i]) {
//			arr[cnt] = i;
//			if (isDia(cnt))
//				continue;
//			//cout << arr[cnt] << '\n';
//			ch[i] = true;
//			dfs(cnt + 1);
//			ch[i] = false;
//		}
//	}
//}
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T;
//	cin >> T;
//
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		ans = 0;
//		cin >> N;
//
//		dfs(0);
//
//		cout << '#' << test_case << ' ' << ans << '\n';
//	}
//	return 0;
//}