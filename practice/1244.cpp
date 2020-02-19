//#include <iostream>
//#include <vector>
//#include <stack>
//#include <algorithm>
//using namespace std;
//
//vector<int> div(int n)
//{
//	stack<int> st;
//	vector<int> mk;
//	int i;
//	while (n != 0)
//	{
//		st.push(n % 10);
//		n /= 10;
//	}
//
//	while (!st.empty())
//	{
//		mk.push_back(st.top());
//		st.pop();
//	}
//
//	return mk;
//}
//
//bool desc(int a, int b)
//{
//	return a > b;
//}
//
//void swap(int &a, int &b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	int tc, t, i, j, k, l;
//	cin >> tc;
//	for (t = 1; t < tc + 1; t++)
//	{
//		bool ddigit = false;
//		vector<int> nums, sortnums, fin;
//		int tmp, dump, len;
//		cin >> tmp >> dump;
//		nums = div(tmp);
//		sortnums = nums;
//		sort(sortnums.begin(), sortnums.end(), desc);
//		len = nums.size();
//		bool *b = new bool[len];
//		for (i = 0; i < len; i++)
//			b[i] = false;
//
//		for (i = 1; i < len; i++)
//		{
//			if (sortnums[i] == sortnums[i - 1])
//			{
//				ddigit = true;
//				break;
//			}
//		}
//
//		int seq = -1;
//		for (i = 0; i < len; i++)
//		{
//			if (dump == 0)
//				break;
//			if (sortnums[i] != nums[i])
//			{
//				for (j = len - 1; j >= 0; j--)
//				{
//					if (sortnums[i] == nums[j])
//					{
//						swap(nums[i], nums[j]);
//						dump--;
//
//						b[j] = true;
//
//						if (seq == nums[i])
//						{
//							fin.clear();
//							for (k = 0; k < len; k++)
//							{
//								if (b[k])
//									fin.push_back(nums[k]);
//							}
//							sort(fin.begin(), fin.end(), desc);
//							l = 0;
//							for (k = 0; k < len; k++)
//							{
//								if (b[k])
//								{
//									nums[k] = fin[l];
//									l++;
//								}
//							}
//						}
//						else if (seq != -1)
//						{
//							for (k = 0; k < len; k++)
//								b[k] = false;
//						}
//
//						seq = nums[i];
//						break;
//					}
//				}
//			}
//		}
//
//		if (dump > 0 && dump % 2 == 1 && !ddigit)
//			swap(nums[len - 1], nums[len - 2]);
//
//		cout << '#' << t << ' ';
//		for (i = 0; i < len; i++)
//			cout << nums[i];
//		cout << endl;
//
//		delete[] b;
//		b = NULL;
//	}
//
//	return 0;
//}