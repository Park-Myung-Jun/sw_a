//#include <iostream>
//#include <string>
//#define thre 50
//using namespace std;
//string str[thre], str_arr[10] = {"0001101","0011001","0010011","0111101","0100011","0110001", "0101111","0111011","0110111","0001011"};
//int N, M, ey, ex, sy, sx, arr[8] = { 0 }, s=0, ch = 0;
//
//bool find() {
//	string line;
//	int i, j;
//	for (i = 0; i < N; i++)
//		for (j = M-1; j >= 0; j--)
//			if (str[i][j] == '1')
//			{
//				ex = j;
//				sy = i;
//				sx = j - 55;
//				line = str[i].substr(sx,56);
//				break;
//			}
//	for (i = N - 1; i >= 0; i--)
//		for (int j = 0; j < M; j++)
//			if (str[i][j] == '1')
//			{
//				ey = i;
//				break;
//			}
//
//	string tmp;
//	for (i = 0; i < 56; i+=7)
//	{
//		tmp = line.substr(i, 7);
//		for (j = 0; j < 10; j++)
//		{
//			if (str_arr[j] == tmp)
//			{
//				if (i / 7 % 2 == 0)
//					ch += (j * 3);
//				else
//					ch += j;
//				s += j;
//				break;
//			}
//		}
//	}
//
//	return ch % 10 == 0;
//}
//
//int main(int argc, char** argv)
//{
//	int test_case, T;
//	
//	cin >> T;
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		cin >> N >> M;
//		for (int i = 0; i < N; i++)
//			cin >> str[i];
//		
//		s = 0, ch = 0;
//		bool result = find();
//
//		cout << '#' << test_case << ' ' << ((result)?(s):(0)) << '\n';
//	}
//	return 0;
//}