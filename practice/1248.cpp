//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//vector<int> down[10001], up[10001];
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T;
//	cin >> T;
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		int V, E, nod1, nod2, st, end, common;
//		bool ch[10001] = { 0 };
//
//		cin >> V >> E >> nod1 >> nod2;
//		//cout << V << E << nod1 << nod2 << '\n';
//		for (int i = 0; i < E; i++)
//		{
//			cin >> st >> end;
//			//cout << i << ' ' << E << ' ' << st << ' ' << end << '\n';
//			down[st].push_back(end);
//			up[end].push_back(st);
//		}
//		
//		ch[1] = true;
//		int tmp = nod1;
//		while (tmp != 1) {
//			ch[tmp] = true;
//			tmp = up[tmp][0];
//		}
//		tmp = nod2;
//		while (!ch[tmp]) {
//			tmp = up[tmp][0];
//		}
//
//		common = tmp;
//
//		int size = 0;
//		queue<int> q;
//		q.push(common);
//		while(!q.empty()) {
//			int p = q.front();
//			q.pop();
//			size++;
//			for (int i = 0; i < down[p].size(); i++)
//				q.push(down[p][i]);
//		}
//
//		cout << '#' << test_case << ' ' << common << ' ' << size << '\n';
//
//		for (int i = 0; i < V; i++)
//		{
//			down[i].clear();
//			up[i].clear();
//		}
//	}
//	return 0;
//}