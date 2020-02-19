//#include <iostream>
//#define thre 8
//using namespace std;
//
//int N, M, map[thre][thre] = { 0 }, mov[2][8] = { {0,1,1,1,0,-1,-1,-1},{1,1,0,-1,-1,-1,0,1} }, black, white;
//
//void print() {
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//			cout << map[i][j] << ' ';
//		cout << '\n';
//	}
//	cout << '\n';
//}
//
//void calc(int y, int x, int st) {
//	map[y][x] = st;
//	for (int i = 0; i < 8; i++) {
//		int Y = y + mov[0][i], X = x + mov[1][i];
//		bool isP = false;
//		while (0 <= Y && Y < N && 0 <= X && X < N && map[Y][X] == 3-st) {
//			Y += mov[0][i];
//			X += mov[1][i];
//		}
//		if (0 <= Y && Y < N && 0 <= X && X < N && map[Y][X] == st)
//			isP = true;
//		Y = y + mov[0][i];
//		X = x + mov[1][i];
//		while (0 <= Y && Y < N && 0 <= X && X < N && map[Y][X] == 3-st && isP) {
//			map[Y][X] = st;
//			Y += mov[0][i];
//			X += mov[1][i];
//		}
//	}
//}
//
//void count() {
//	for(int i=0;i<N;i++)
//		for (int j = 0; j < N; j++)
//		{
//			if (map[i][j] == 1)
//				black++;
//			if (map[i][j] == 2)
//				white++;		
//		}
//}
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T;
//	cin >> T;
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		for (int i = 0; i < thre; i++)
//			for (int j = 0; j < thre; j++)
//				map[i][j] = 0;
//
//		black = 0;
//		white = 0;
//		int y, x, st;
//		cin >> N >> M;
//		map[N / 2 - 1][N / 2 - 1] = 2;
//		map[N / 2 - 1][N / 2] = 1;
//		map[N / 2][N / 2 - 1] = 1;
//		map[N / 2][N / 2] = 2;
//
//		for (int i = 0; i < M; i++)
//		{
//			cin >> y >> x >> st;
//			calc(y-1, x-1, st);
//			//print();
//		}
//
//		count();
//
//		cout << '#' << test_case << ' ' << black << ' ' << white << '\n';
//	}
//	return 0;
//}