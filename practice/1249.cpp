//#include <iostream>
//#include <queue>
//#include <string>
//#define thre 100
//using namespace std;
//
//class Point {
//public:
//	int y, x;
//	Point(int y, int x) {
//		this->x = x;
//		this->y = y;
//	}
//};
//
//string str[thre];
//int map[thre][thre] = { 0 }, ch[thre][thre] = { 0 }, mov[2][4] = { {0,0,1,-1},{1,-1,0,0} }, N;
//
//int dfs(int y, int x) {
//	int mini = 0x7fffffff;
//	queue<Point> q;
//	q.push(Point(y, x));
//	ch[y][x] = map[y][x];
//	while (!q.empty()) {
//		Point p = q.front();
//		q.pop();
//		if (p.x == N - 1 && p.y == N - 1 && ch[p.y][p.x] < mini)
//		{
//			mini = ch[p.y][p.x];
//		}
//		for (int i = 0; i < 4; i++) {
//			int Y = p.y + mov[0][i], X = p.x + mov[1][i];
//			if (0 <= Y && Y < N && 0 <= X && X < N) {
//				int tmp = ch[p.y][p.x] + map[Y][X];
//				if (ch[Y][X] == -1)
//				{
//					ch[Y][X] = tmp;
//					q.push(Point(Y, X));
//				}
//				else
//				{
//					if (ch[Y][X] > tmp)
//					{
//						ch[Y][X] = tmp;
//						q.push(Point(Y, X));
//					}
//				}
//			}
//		}
//	}
//
//	return mini;
//
//}
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T, result;
//	cin >> T;
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		cin >> N;
//		for (int i = 0; i < N; i++)
//		{
//			cin >> str[i];
//			for (int j = 0; j < N; j++)
//			{
//				map[i][j] = (int)(str[i][j] - '0');
//				ch[i][j] = -1;
//			}
//		}
//
//		result = dfs(0, 0);
//		
//		cout << '#' << test_case << ' ' << result << '\n';
//	}
//	return 0;
//}