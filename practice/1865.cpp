//#include <iostream>
//#define thre 16
//
//using namespace std;
//
//double arr[thre][thre] = { 0 }, N, maxi;
//bool ch[thre] = { 0 };
//
//void dfs(int cnt, double now) {
//	if (maxi >= now) {
//		return;
//	}
//	if (cnt == N)
//	{
//		//if(maxi < seq_acu[N - 1] * 100)
//		//	maxi = seq_acu[N - 1] * 100;
//		//cout << "maxi " << maxi << '\n';
//		//init = true;
//		maxi = now;
//		return;
//	}
//	for (int i = 0; i < N; i++)
//	{
//		if (!ch[i])
//		{
//			double tmp = now;
//			tmp *= arr[cnt][i];
//			//seq[cnt] = (double)arr[cnt][i]/100;
//			/*if(cnt != 0)
//				seq_acu[cnt] = arr[cnt][i] * seq_acu[cnt-1];
//			else
//				seq_acu[cnt] = arr[cnt][i];
//			if (init && seq_acu[cnt] * 100 < maxi)
//				continue;*/
//			//cout << seq_acu[cnt] << '\n';
//			ch[i] = true;
//			dfs(cnt + 1, tmp);
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
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		//init = false;
//		maxi = -1;
//		cin >> N;
//		for (int i = 0; i < N; i++)
//			for (int j = 0; j < N; j++)
//			{
//				cin >> arr[i][j];
//				arr[i][j] /= 100;
//			}
//
//		dfs(0, 100);
//
//		cout << fixed;
//		cout.precision(6);
//		cout << '#' << test_case << ' ' << maxi << '\n';
//	}
//	return 0;
//}