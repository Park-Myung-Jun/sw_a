//#include <iostream>
//#include <string>
//#include <vector>
//#define thre 2000
//using namespace std;
//string str[thre];
//int row = 56, col = 1;
//int N, M, ey = 0, ex = 0, sy = 0, sx = 0, s = 0, ch = 0, maping[(1 << 8)] = { 0 }, border;
//bool map[thre][thre] = { 0 };
//
//void print() {
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M * 4; j++)
//			cout << map[i][j];
//		cout << '\n';
//	}
//}
//
//int findsx(int base) {
//	vector<bool> v;
//	for (int i = base; i >= 0; i -= 7)
//		v.push_back(map[sy][i]);
//
//	int mul = 1, max = 0;
//	while (mul <= v.size() / 8) {
//		int count = 0;
//		for (int i = 0; i < 8 * mul; i += mul) {
//			if (v[i])
//				count++;
//			else
//				break;
//		}
//		if (count == 8 && mul > max)
//			max = mul;
//		mul++;
//	}
//	return max;
//}
//
//bool isAll() {
//	for (int i = 0; i < N; i++)
//		for (int j = M * 4 - 1; j >= 0; j--)
//			if (map[i][j] == true)
//				return true;
//
//	return false;
//}
//
//void range() {
//	sx = 0;
//	sy = 0;
//	ex = 0;
//	ey = 0;
//	col = 1;
//	for (int i = 0; i < N; i++)
//		for (int j = M * 4 - 1; j >= 0; j--)
//			if (map[i][j] == true)
//			{
//				ex = j;
//				sy = i;
//				border = findsx(j);
//				//cout << "border " << border << '\n';
//				sx = j - border * 56 + 1;
//				while (map[i + col][j] == 1)
//					col++;
//				ey = col + i - 1;
//				//cout << row << ' ' << j << '\n';
//				//cout << sx << ' ' << ex << ' ' << sy << ' ' << ey << '\n';
//				return;
//			}
//}
//
//int find() {
//	range();
//	//cout << sx << ' ' << ex << ' ' << sy << ' ' << ey << '\n';
//
//	/*for (int i = sy; i <= ey; i++)
//	{
//		for (int j = sx; j <= ex; j++)
//			cout << map[i][j];
//		cout << '\n';
//	}*/
//
//	ch = 0, s = 0;
//	for (int i = sx; i < ex + 1; i += (border * 7))
//	{
//		int num = 0;
//		for (int j = i; j < i + border * 7; j += border)
//		{
//			num *= 2;
//			if (map[sy][j] == true)
//				num++;
//		}
//		num = maping[num];
//		//cout << num << ' ' << (i - sx) / (border * 7) << '\n';
//		if ((i - sx) / (border * 7) % 2 == 0)
//			ch += (num * 3);
//		else
//			ch += num;
//		s += num;
//	}
//
//	for (int i = sy; i <= ey; i++)
//		for (int j = sx; j <= ex; j++)
//			map[i][j] = false;
//
//	//print();
//
//	if (ch % 10 == 0)
//		return s;
//	else
//		return 0;
//}
//
//int main(int argc, char** argv)
//{
//	int test_case, T;
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	maping[13] = 0;
//	maping[25] = 1;
//	maping[19] = 2;
//	maping[61] = 3;
//	maping[35] = 4;
//	maping[49] = 5;
//	maping[47] = 6;
//	maping[59] = 7;
//	maping[55] = 8;
//	maping[11] = 9;
//
//	cin >> T;
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		int total = 0;
//		cin >> N >> M;
//		for (int i = 0; i < N; i++)
//		{
//			cin >> str[i];
//			for (int j = 0; j < M; j++)
//			{
//				for (int k = 0; k < 4; k++)
//				{
//					if ('0' <= str[i][j] && str[i][j] <= '9')
//						map[i][j * 4 + k] = (bool)(((int)(str[i][j] - '0') >> (3 - k)) & 1);
//					else if ('a' <= str[i][j] && str[i][j] <= 'f')
//						map[i][j * 4 + k] = (bool)((((int)(str[i][j] - 'a') + 10) >> (3 - k)) & 1);
//					else if ('A' <= str[i][j] && str[i][j] <= 'F')
//						map[i][j * 4 + k] = (bool)((((int)(str[i][j] - 'A') + 10) >> (3 - k)) & 1);
//				}
//			}
//		}
//
//		//print();
//
//		while (isAll())
//			total += find();
//
//		cout << '#' << test_case << ' ' << total << '\n';
//	}
//	return 0;
//}