//#include <iostream>
//#include <string>
//#define thre 15
//using namespace std;
//
//int N, base = 0x03ffffff, bits[thre], sets;
//bool ch[thre] = { 0 };
//
//void fs(int cnt) {
//	if (cnt == N) {
//		int all = 0;
//		for (int i = 0; i < N; i++) {
//			if (ch[i])
//				all |= bits[i];
//		}
//		if (base == all)
//			sets++;
//		return;
//	}
//	for (int i = 0; i < 2; i++) {
//		ch[cnt] = i;
//		fs(cnt + 1);
//	}
//}
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T;
//	cin >> T;
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		sets = 0;
//		string strs[thre];
//		cin >> N;
//		for (int i = 0; i < N; i++)
//		{
//			cin >> strs[i];
//			int s_len = strs[i].size();
//			for (int j = 0; j < s_len; j++)
//				bits[i] = bits[i] | (1 << (int)(strs[i][j] - 'a'));
//		}
//
//		fs(0);
//
//		cout << '#' << test_case << ' ' << sets << '\n';
//	}
//	return 0;
//}