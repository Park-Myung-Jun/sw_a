//#include<iostream>
//#define thre 10
//using namespace std;
//
//int point[10] = { 0 }, mass[10] = { 0 }; 
//double result[9] = { 0 };
//double digit = 0.00000000001;
//
//int main(int argc, char** argv)
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	int test_case;
//	int T, N;
//	cin >> T;
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		cin >> N;
//		for (int i = 0; i < N; i++)
//			cin >> point[i];
//		for (int i = 0; i < N; i++)
//			cin >> mass[i];
//
//		for (int i = 0; i < N - 1; i++)
//		{
//			bool isEnd = false;
//			double pre = 0.1, st = point[i], end = point[i + 1], t_dif = point[i + 1]-point[i];
//			while (true)
//			{
//				double d = st - point[i] + pre, dif = end - st;
//				while(d <= st + dif)
//				{
//					double right = 0.0, left = 0.0;
//					for (int j = 0; j <= i; j++)
//						left += mass[j] / (d + point[i] - point[j]) / (d + point[i] - point[j]);
//					for (int j = i + 1; j < N; j++)
//						right += mass[j] / (t_dif - d + point[j] - point[i+1]) / (t_dif - d + point[j] - point[i+1]);
//					if (left == right || pre < digit)
//					{
//						result[i] = point[i] + d;
//						isEnd = true;
//						break;
//					}
//					if (left < right)
//					{
//						st = point[i] + (d - pre);
//						end = st + pre;
//						pre /= 10;
//						break;
//					}
//					d += pre;
//				}
//				if (isEnd)
//					break;
//				
//			}
//		}
//
//		cout << '#' << test_case << ' ';
//		for (int i = 0; i < N - 1; i++)
//		{
//			cout.precision(10);
//			cout << fixed << result[i] << ' ';
//		}
//		cout << '\n';
//	}
//	return 0;
//}