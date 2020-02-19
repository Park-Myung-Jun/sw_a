#include<iostream>
#define thre 100
using namespace std;

typedef struct point {
	int y, x;
} P;

typedef struct matrix {
	P p;
	int w, h;
} M;

M mat[100] = { 0 };
int map[thre][thre] = { 0 }, mat_size = 0;
bool ch[thre][thre] = { 0 };



int main(int argc, char** argv)
{
	int test_case;
	int T, n;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		mat_size = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> map[i][j];

		for(int i=0;i<n;i++)
			for (int j = 0; j < n; j++)
			{
				if (!ch[i][j] && map[i][j] != 0) {
					int w = j, h = i;
					while (map[h][w++] != 0);
					while (map[h++][w] != 0);
					mat[mat_size++] = { {i,j}, h - i, w - j };
				}
			}

		cout << '#' << test_case << ' ' << 0 << '\n';
	}

	return 0;
}