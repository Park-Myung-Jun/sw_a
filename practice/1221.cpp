//#include <iostream>
//#include <string>
//using namespace std;
//
//string seq[10] = {"ZRO","ONE","TWO","THR","FOR","FIV","SIX","SVN","EGT","NIN"};
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T, N;
//	cin >> T;
//	string tmp;
//	getline(cin, tmp);
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		int nums[10] = { 0 };
//		string str;
//		getline(cin, tmp);
//		getline(cin, str);
//		int len = str.size();
//		for (int i = 0; i < len; i++) {
//			for (int j = 0; j < 10; j++) {
//				if (str[i] == seq[j][0] && str[i + 1] == seq[j][1])
//				{
//					nums[j]++;
//					break;
//				}
//			}
//		}
//
//		cout << '#' << test_case << ' ';
//		for (int i = 0; i < 10; i++)
//			while (nums[i]--)
//				cout << seq[i] << ' ';
//		cout << '\n';
//	}
//
//
//	return 0;
//}