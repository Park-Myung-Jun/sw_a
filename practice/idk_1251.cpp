//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//class Edge {
//public:
//	long double v;
//	int y, x;
//	Edge(long double v, int n1, int n2) {
//		this->v = v;
//		this->y = n1;
//		this->x = n2;
//	}
//	bool operator <(Edge &Edge) {
//		return this->v < Edge.v;
//	}
//};
//
//int island[2][1000] = { 0 }, ch[1000] = { 0 };
//
//int find(int x) {
//	if (ch[x] == x)
//		return x;
//	else
//		return ch[x] = find(ch[x]);
//}
//
//bool uni(int x, int y) {
//	bool is;
//	x = find(x);
//	y = find(y);
//	if (x != y)
//		is = true;
//	else
//		is = false;
//	ch[y] = x;
//	return is;
//}
//
//int abs(int a, int b) {
//	return (a > b) ? (a - b) : (b - a);
//}
//
//
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	double e;
//	int T, N;
//	cin >> T;
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		vector<Edge> v;
//		cin >> N;
//		for (int i = 0; i < N; i++)
//		{
//			cin >> island[0][i];
//			ch[i] = i;
//		}
//		for (int i = 0; i < N; i++)
//			cin >> island[1][i];
//		cin >> e;
//
//		for(int i=0;i<N-1;i++)
//			for (int j = i + 1; j < N; j++)
//			{
//				int x = abs(island[0][i], island[0][j]);
//				int y = abs(island[1][i], island[1][j]);
//				v.push_back(Edge((long double)x*x+y*y,i,j));
//			}
//
//		sort(v.begin(), v.end());
//
//		for (int i = 0; i < v.size(); i++)
//			cout << (long double)v[i].v << ' ';
//		cout << '\n';
//
//		long double sum = 0;
//		int count = N-1, v_len = v.size();
//		for (int i = 0; i < v_len; i++) {
//			if (uni(v[i].x, v[i].y)) {
//				cout << v[i].x << ' ' << v[i].y << ' ' << v[i].v << '\n';
//				sum += v[i].v;
//				count--;
//			}
//			if (count == 0)
//				break;
//		}
//
//		cout << '#' << test_case << ' ' << (N==1?0:(sum*e+0.5)) << '\n';
//	}
//	return 0;
//}