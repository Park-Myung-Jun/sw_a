//#include<iostream>
//#include <string>
//#define thre 49
//using namespace std;
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T, N, map[thre][thre] = { 0 };
//	string str[thre];
//	cin >> T;
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		cin >> N;
//		for (int i = 0; i < N; i++)
//		{
//			cin >> str[i];
//			for (int j = 0; j < N; j++) {
//				map[i][j] = str[i][j] - '0';
//			}
//		}
//
//		/*for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < N; j++) {
//				cout << map[i][j] << ' ';
//			}
//			cout << '\n';
//		}*/
//
//		bool d = true;
//		int sum = 0, s = 0;
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = N/2-s; j <= N/2+s; j++)
//			{
//				//cout << sum << ' ';
//				sum += map[i][j];
//			}
//			if (N / 2 - s == 0)
//				d = !d;
//			if (d)
//				s++;
//			else
//				s--;
//		}
//
//		cout << '#' << test_case << ' ' << sum << '\n';
//	}
//	return 0;
//}