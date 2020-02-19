//#include<iostream>
//#define thre 10
//using namespace std;
//
//class Point {
//public:
//	int x, y;
//	Point() {}
//	Point(int y, int x) {
//		this->y = y;
//		this->x = x;
//	}
//};
//
//Point st, en;
//Point cus[thre];
//int seq[thre] = { 0 };
//bool ch[thre] = { 0 };
//int N, minimum = 0x7fffffff;
//
//int abs(int a, int b)
//{
//	return (a > b) ? (a - b) : (b - a);
//}
//
//int distance(Point a, Point b) {
//	return abs(a.x, b.x) + abs(a.y, b.y);
//}
//
//int calc() {
//	int c = distance(st, cus[seq[0]]) + distance(en, cus[seq[N - 1]]);
//	for (int i = 0; i < N - 1; i++)
//		c += distance(cus[seq[i]], cus[seq[i + 1]]);
//	return c;
//}
//
//void bt(int cnt) {
//	if (cnt == N)
//	{
//		int sum = calc();
//
//		if (sum < minimum)
//			minimum = sum;
//		return;
//	}
//	for (int i = 0; i < N; i++)
//	{
//		if (!ch[i])
//		{
//			seq[cnt] = i;
//			ch[i] = true;
//			bt(cnt + 1);
//			ch[i] = false;
//		}
//	}
//}
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T, x, y;
//	cin >> T;
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		cin >> N;
//		cin >> st.x >> st.y;
//		cin >> en.x >> en.y;
//		for (int i = 0; i < N; i++)
//		{
//			cin >> x >> y;
//			cus[i].x = x;
//			cus[i].y = y;
//		}
//
//        minimum = 0x7fffffff;
//
//		bt(0);
//
//		cout << '#' << test_case << ' ' << minimum << '\n';
//	}
//	return 0;
//}