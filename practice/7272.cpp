//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int N, alpha[26] = {1,2,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0};
//	string str1, str2, say[2] = { "DIFF","SAME" };
//	cin >> N;
//	for (int i = 1; i <= N; i++)
//	{
//		int is = 1;
//		cin >> str1 >> str2;
//		if (str1.size() == str2.size())
//		{
//			for (int j = 0; j < str1.size(); j++)
//				if (alpha[str1[j] - 'A'] != alpha[str2[j] - 'A'])
//					is = 0;
//		}
//		else
//			is = 0;
//
//		cout << '#' << i << ' ' << say[is] << '\n';
//	}
//
//	return 0;
//}